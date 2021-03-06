# 餐巾折叠系统工控机软件
作者：郑文轩  
邮箱：zaxs0130@gmail.com  
版权归属于吸力奇迹（北京）科技有限公司。  

# 简介
本软件为吸力奇迹公司研制的餐巾折叠系统配套的上位机程序，需要与机械臂（机器人）、摄像头、PLC配合使用。  
程序分为主体部分和图像处理模块两个子项目。  

## 依赖
* Visual Studio 2017+
* [OpenCV 4.1.0](https://sourceforge.net/projects/opencvlibrary/files/4.1.0/opencv-4.1.0-vc14_vc15.exe/download) 
* 海康威视摄像头驱动MVS
* Qt (>= 5.0)

其中，OpenCV理论上可以使用3.0以后的任意版本，需要在项目属性中修改lib输入项；另外需要设置环境变量`OPENCV_ROOT`以便定位头文件和库目录。例如，`OPENCV_ROOT=C:\ProgramData\OpenCV\build`。  
MVS使用默认设置安装即可，请勿修改安装路径。  
Qt需要配合Qt for VS插件，设置好Qt目录后对项目执行"Change solution's Qt version"即可。

## 运行环境
本程序运行于Windows 10下，程序采用64位编写，重新编译可兼容32位。经测试在Windows 7下有兼容性问题，其他系统未测试。  

# 图像处理模块
图像处理模块负责对摄像头采集的图像进行处理，以获得所需的物理信息。  

## NapkinImageParameters.h
该头文件定义了用于和图像模块交互的两个结构体`ImageResult`与`ImageParameters`。  

## NapkinImageProcess.h/cpp
这里定义并实现了餐巾检测的相关函数。保留了检测抓钩装置的函数`holderDetect`但没有实际实现。算法流程大致如下：
1. 滤波
2. 二值化
3. 膨胀与腐蚀
4. 寻找轮廓
5. 在轮廓中寻找餐巾
6. 计算轮廓数据
7. 求解物理信息

# 主程序
主程序采用Qt框架编写，负责界面交互、与机器人和PLC的交互等等。  
代码中各主要模块都做了分离处理，并通过Qt的信号与槽机制进行沟通与连接。下面简单介绍各模块，详细的功能可见注释。  

## MainWindow
主窗口模块，负责GUI显示、逻辑交互、日志记录、程序初始化等。  

## CameraSettingDialog
摄像头参数设置窗口，可以设置图像来源，包括文件（图片和视频）供调试使用以及默认的0号摄像头。  
程序启动时会自动调用一次该窗口以将默认参数发给图像采集线程。  

## ImageSettingDialog
图像参数设置窗口，包括曝光度、对比度、亮度等参数。配置信息会自动与ini文件同步。  
程序启动时会自动调用一次该窗口以将默认参数发给图像采集线程。  

## ImageThread
图像采集与处理线程，在收到图像采集配置信息后会自动启动子线程不断采集图像并处理，随后将相关信息发送给主界面。  
外部通过`detectNapkin`等函数使该线程开始处理图像，内部通过`workType`标志决定工作状态。  
图像会持续采集并发送，但处理只会在收到命令后执行一次。

## ModBus
这里实现了与PLC通讯使用的ModBus协议。实际只使用了该协议框架，具体内容另行商定，可见`VuleDefines.h`。  

## MvCamera
这部分代码来自于MVS官方示例，用于对摄像头API做简单的包装以便于使用。  

## PasswordDialog
简单的密码校验窗口，作用是避免现场工人无意间修改配置。  
这个窗口会在各个设置窗口之前调用，密码不对则不会弹出后续窗口。  

## PlcSettingDialog
PLC通讯设置窗口，主要是设置端口号和波特率。配置信息会自动与ini文件同步。  

## PlcThread
PLC通讯模块。模块名位Thread但实际并未使用多线程。  
该模块负责与PLC通讯，同时也会将通讯中的相关信息发送至主窗口的日志模块。  

## RobotSettingDialog
机器人参数设置窗口，其实能设置的只有一个端口号，因为本程序是作为TCP的服务端来接收链接的。  
配置信息会自动与ini文件同步。  

## RobotThread
与机器人通讯的线程，采用`QTcpServer`模型，主要负责将坐标指令发送给机器人。  

## ValueDefines
定义了一些与PLC通讯使用的代码以及程序内部的状态码。

# 配置文件
配置文件为NapkinFolder.ini，其中各项参数都带有cmt行作为注释。  
配置参数一般不需要修改，在部分情况下需要修改其中的部分内容。  

## 更换摄像头
更换摄像头时需要像处理参数
`[img]`栏中的参数已经是调整的比较合适的一组参数，不建议修改。如有需要也可以自行对相关图像处理参数进行修改。  

## 光源条件改变
此时可以修改`[camera]`栏中的相关参数，调整相机拍摄参数以获取比较清晰的图像。  

## PLC配置
`[PLC]`配置栏主要配置端口、波特率和从机代码等，如有需要可以从这里修改。  

## 机器人配置
`[robot]`配置栏可以对监听端口和字符串格式做修改。  

## 调试
`[debug]`栏为调试配置，`enableCamera=false`时，程序启动会自动读取下方的文件，否则会自动打开摄像头。

## 调整餐巾标准参数
`[standard]`栏中为餐巾的各项标准参数以及限制条件，可根据实际情况修改。  
