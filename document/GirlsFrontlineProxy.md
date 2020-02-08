# 少女前线代理工具系列
这一系列的工具基于[rsyars](https://github.com/xxzl0130/rsyars)，包括以下工具：  
* [rsyars](https://github.com/xxzl0130/rsyars)-芯片代码提取简陋版  
* [AntiRivercrab](https://github.com/xxzl0130/AntiRivercrab)-反和谐工具  
* [GF_Kalina](https://github.com/xxzl0130/GF_Kalina)-格林娜好感读取工具  
* [GF_Tool_Server](https://github.com/xxzl0130/GF_Tool_Server)-少女前线一系列基于代理的工具的网页版  

这一系列的工具其核心是一致的，通过网络代理获取游戏数据，解密后提取所需信息，并通过控制台、文件、网页等形式显示出来。  

主要技术包括：
* Go语言  
* 以RC4为主的加密算法  
* 简单的Http server  
* 多用户服务  

## Go语言
由于最初的rsyars工具是从别人的项目接手来的，使用Go语言实现的，因此我也学习了一些Go然后以此实现。事实证明Go确实很适合做服务器。  

## 加密算法
加密算法这部分是为了破解游戏数据的加密，本身并不算复杂。另外为了避免法律问题，具体的算法这里也不方便说。  

## Http server
最初是为了提供简单的网页服务，后来实现了在网页上查询后台数据，大容量数据Gzip压缩传输，https服务器配置等。  

## 多用户服务
最初的rsyars不需要考虑游戏数据加密的问题，可以直接支持多用户服务。而后续游戏数据做了如下修改：  
1. https提交用户名密码（与本程序无关）
2. 服务器返回一个唯一字符串sign
3. 后续游戏数据均会以sign为密钥进行加密，因此解密也需要该sign

这就要求服务器记录每个用户的sign，再在收到后续数据的时候用sign解密。这里的解决方案如下：  
由于服务不需要持久化，这里就用map记录数据。map的key为IP地址，value为sign，记录下sign后，后续再以IP查询sign并尝试解密。