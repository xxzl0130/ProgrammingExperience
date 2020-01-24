// 百度地图API功能

"use strict";

//地图初始化
var centerPoint = new BMap.Point(101.42850, 36.03771);  // 创建点坐标  
var map = new BMap.Map("allmap");
map.centerAndZoom(centerPoint, 10);
map.addControl(new BMap.NavigationControl()); // 添加平移缩放控件
map.addControl(new BMap.ScaleControl());                    // 添加比例尺控件
map.enableScrollWheelZoom();   //启用滚轮放大缩小，默认禁用
//map.enableContinuousZoom();    //启用地图惯性拖拽，默认禁用

var sy = new BMap.Symbol(BMap_Symbol_SHAPE_BACKWARD_OPEN_ARROW, {
	scale: 0.6,//图标缩放大小
	strokeColor:'#fff000',//设置矢量图标的线填充颜色
	strokeWeight: '2',//设置线宽
});
var icons = new BMap.IconSequence(sy, '10', '30');	
 
var polylines = new Array;
var points = new Array;
var markers = new Array;

function drawLine(index,point){
	if(markers[index] == null)
	{
		markers[index] = new BMap.Marker(point);
	}
	else
	{
		markers[index].setPosition(point);
	}
	points[index].push(point);
	polylines[index].setPath(points[index]);
	if(index == 0)
	{
		map.setCenter(point);
	}
}

function drawPath(i, longitude, latitude)  //给qt调用的接口
{
	while (i >= polylines.length)
	{//补齐若干个线
		var path = [];
		var line = new BMap.Polyline(path, {
			//enableEditing: false,//是否启用线编辑，默认为false
			enableClicking: false,//是否响应点击事件，默认为true
			//icons:[icons],
			strokeWeight:'3',//折线的宽度，以像素为单位
			strokeOpacity: 0.8,//折线的透明度，取值范围0 - 1
			strokeColor:"#0099FF" //折线颜色
		 });
		polylines.push(line);
		map.addOverlay(line);
		points.push(new Array);
		markers.push(new BMap.Marker(centerPoint))
	}

	var OPoint = new BMap.Point(longitude,latitude);
	//var convertor = new BMap.Convertor();
	//var pointArr = [];
	drawLine(i,OPoint);
	//pointArr.push(OPoint);
	//convertor.translate(pointArr, 1, 5, translateCallback);	
}

function clearPath(i)
{
	if(i < 0)
	{
		for(var j = 0;j < points.length;j++)
		{
			points[j] = [];
			polylines[j].setPath(points[j]);
			markers[j] = null;
		}
	}
	else
	{
		points[i] = [];
		polylines[i].setPath(points[j]);
		markers[i] = null;
	}
}
var overlays = [];
var markercomplete = function(e){
	overlays.push(e);//捕捉到绘制的点的信息，可以进一步处理
	bridge.receivePosition(e.getPosition().lng,e.getPosition().lat);
};

var polylinecomplete = function (overlay) {
	overlays.push(overlay);//捕捉到绘制的点的信息，可以进一步处理
	var path = overlay.getPath();
	for(var i = 0;i < path.length;i++)
	{
		bridge.receivePosition(path[i].lng, path[i].lat);
	}
	bridge.receiveSelectPathStoped();
};

var styleOptions = {
    strokeColor:"red",    //边线颜色。
    fillColor:"red",      //填充颜色。当参数为空时，圆形将没有填充效果。
    strokeWeight: 3,       //边线的宽度，以像素为单位。
    strokeOpacity: 0.8,    //边线透明度，取值范围0 - 1。
    fillOpacity: 0.6,      //填充的透明度，取值范围0 - 1。
    strokeStyle: 'solid' //边线的样式，solid或dashed。
}
    //实例化鼠标绘制工具
var drawingManager = new BMapLib.DrawingManager(map, {
    isOpen: false, //是否开启绘制模式
    enableDrawingTool: false, //是否显示工具栏
    drawingToolOptions: {
        anchor: BMAP_ANCHOR_TOP_RIGHT, //位置
        offset: new BMap.Size(5, 5), //偏离值
    },
    circleOptions: styleOptions, //圆的样式
    polylineOptions: styleOptions, //线的样式
    polygonOptions: styleOptions, //多边形的样式
    rectangleOptions: styleOptions //矩形的样式
});  
drawingManager.addEventListener('markercomplete', markercomplete);
drawingManager.addEventListener('polylinecomplete', polylinecomplete);
drawingManager.setDrawingMode(BMAP_DRAWING_POLYLINE);

function enableDrawingPoint()
{
	map.clearOverlays();
	overlays = [];
	drawingManager.open();
}

function disableDrawingPoint()
{
	drawingManager.close();
}

function clearAllOverlay() {
	for(var i = 0; i < overlays.length; i++)
	{
		map.removeOverlay(overlays[i]);
	}
	overlays.length = 0   
}