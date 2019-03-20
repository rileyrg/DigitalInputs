cmake_minimum_required(VERSION 3.8.2)

# message([STATUS] $ENV{ARDUINO_SDK_PATH})

# set(ENV{ARDUINO_SDK_PATH} "illegal")
set (CMAKE_CXX_STANDARD 11)

set(CMAKE_TOOLCHAIN_FILE ../cmake/Arduino-Toolchain.cmake)

project(DigitalInputs)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


arduino_cmake_project(DigitalInputs BOARD_NAME uno)

include_directories($ENV{ARDUINO_SDK_PATH}/hardware/tools/avr/avr/include  /home/rgr/development/projects/arduino/DigitalInputs/.piolibdeps/TFT_ST7735_ID2984
)

add_arduino_executable(DigitalInputs src/main.cpp)


set_target_upload_port(DigitalInputs /dev/ttyACM0)
