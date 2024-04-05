cmake_minimum_required(VERSION 3.27)
project(QtTestBug41239)

find_package(Qt6 REQUIRED COMPONENTS Core Test)
qt_standard_project_setup()

qt_add_executable(Tests main.cpp)
target_link_libraries(Tests PRIVATE Qt::Core Qt::Test)
set_target_properties(Tests PROPERTIES
        WIN32_EXECUTABLE ON)
