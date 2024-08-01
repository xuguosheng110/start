# start
能介绍
基于深度学习的方法识别赛道中的障碍物，使用模型为YOLOv5s

使用方法
准备工作
具备真实的机器人或机器人仿真模块，包含运动底盘、相机及RDK套件，并且能够正常运行。

安装功能包
1.安装功能包

启动机器人后，通过终端SSH或者VNC连接机器人，点击本页面右上方的“一键部署”按钮，复制如下命令在RDK的系统上运行，完成相关Node的安装。

sudo apt update
sudo apt install -y tros-racing-obstacle-detection-yolo
2.运行障碍物检测功能

source /opt/tros/local_setup.bash
cp -r /opt/tros/lib/racing_obstacle_detection_yolo/config/ .

# web端可视化障碍物（启动功能后在浏览器打开 ip:8000）
export WEB_SHOW=TRUE

# 仿真（使用仿真模型）
ros2 launch racing_obstacle_detection_yolo racing_obstacle_detection_yolo_simulation.launch.py

# 实际场景（使用实际场景中的模型）
ros2 launch racing_obstacle_detection_yolo racing_obstacle_detection_yolo.launch.py
原理简介
地平线RDK通过摄像头获取小车前方环境数据，图像数据通过训练好的YOLO模型进行推理得到障碍物的图像坐标值并发布。

接口说明
话题
