# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject1")
project ("CMakeProject2")
project ("CMakeProject3")
# Включите подпроекты.
add_subdirectory ("CMakeProject2\\Task3")
add_subdirectory ("CMakeProject2\\Task2")
add_subdirectory ("CMakeProject2\\Task1")
