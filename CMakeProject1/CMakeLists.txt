# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject1")
project ("CMakeProject2")
project ("CMakeProject3")
project ("CMakeProject4")
project ("CMakeProject5")
project ("CMakeProject6")
project ("CMakeProject7")
project ("CMakeProject8")
# Включите подпроекты.
add_subdirectory ("CMakeProject1\\task8")
add_subdirectory ("CMakeProject1\\task7")
add_subdirectory ("CMakeProject1\\task6")
add_subdirectory ("CMakeProject1\\task5")
add_subdirectory ("CMakeProject1\\task4")
add_subdirectory ("CMakeProject1\\task3")
add_subdirectory ("CMakeProject1\\task2")
add_subdirectory ("CMakeProject1\\task1")
