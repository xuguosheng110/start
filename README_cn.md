# hello_world
[English](./README.md) | 简体中文

# 功能介绍

测试nodehub

# 使用方法

## 准备工作



## 安装功能包

**1.安装功能包**


```bash
sudo apt update
sudo apt install -y hello_world
```

**2.运行

```shell
source /opt/tros/local_setup.bash

ros2 hello_world hello_world
```


# 接口说明

## 话题

### Pub话题

| 名称                          | 消息类型                                                     | 说明                                                   |
| ----------------------------- | ------------------------------------------------------------ | ------------------------------------------------------ |
| /cmd_vel    | geometry_msgs/msg/Twist             | 发布小车控制消息                 |

### Sub话题
=======
### Sub话题
| 名称                          | 消息类型                                                     | 说明                                                   |
| ----------------------------- | ------------------------------------------------------------ | ------------------------------------------------------ |
| racing_track_center_detection      | ai_msgs::msg::PerceptionTargets        | 接收赛道中点的位置消息                  |
| racing_obstacle_detection      | ai_msgs/msgs/PerceptionTargets        | 接收检测到的障碍物的位置信息                 |

## 参数

| 参数名                | 类型        | 说明   |
| --------------------- | ----------- | ----------------------------------------------------- |
| pub_control_topic    | string |    发布的控制消息名称，请根据实际发布的话题名称配置，默认值为/cmd_vel |
| avoid_angular_ratio   | float | 避障时的角速度比例，请根据实际情况配置，默认值为1.1 |
| avoid_linear_speed   | float | 避障时的线速度，请根据实际情况配置，默认值为0.25 |
| follow_angular_ratio   | float | 巡线时的角速度比例，请根据实际情况配置，默认值为-1.0 |
| follow_linear_speed   | float | 巡线时的线速度，请根据实际情况配置，默认值为1.5 |
| bottom_threshold   | int | 触发避障功能的坐标阈值（目标底部坐标的y值），请根据实际情况配置，默认值为340 |
|confidence_threshold| float | 触发避障功能的障碍物置信度阈值，请根据实际情况配置，默认值为0.5|
