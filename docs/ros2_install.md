# ROS2 env setup
this is for ROS2 Foxy version  

[Installing ROS 2 via Debian Packages — ROS 2 Documentation: Foxy documentation](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)

## install on ubunut


## ESP32
[Connect ESP32 to ROS2 Foxy. In the era of UAVs, IOT devices, and my… | by Sameer Tuteja | Medium](https://medium.com/@SameerT009/connect-esp32-to-ros2-foxy-5f06e0cc64df)  

[micro-ROS porting to ESP32 | micro-ROS](https://micro.ros.org/blog/2020/08/27/esp32/)   


[uLipe/microROS-esp32-fun](https://github.com/uLipe/microROS-esp32-fun)

```bash
sudo apt install python3-colcon-common-extensions


source install/local_setup.bash

# ros2 run micro_ros_setup create_firmware_ws.sh freertos esp32
# ros2 run micro_ros_setup configure_firmware.sh int32_publisher -t udp -i [your local machine IP] -p 8888

## Now go to the micro-ROS Transport Settings → WiFi Configuration menu and fill your WiFi SSID and password.
# ros2 run micro_ros_setup build_firmware.sh menuconfig

# Now go to the micro-ROS Transport Settings → WiFi Configuration menu and fill your WiFi SSID and password. Save your changes, exit the interactive menu, and run:
ros2 run micro_ros_setup build_firmware.sh

# Connect your ESP32 to the computer with a micro-USB cable, and run:
ros2 run micro_ros_setup flash_firmware.sh

```
