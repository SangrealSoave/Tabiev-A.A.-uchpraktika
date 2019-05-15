# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения
# укажите здесь логику для конкретного проекта.
cmake_minimum_required (VERSION 3.8)
# Добавьте источник для исполняемого файла этого проекта.
add_library(task8_lib.lib STATIC "")
target_sources(task8_lib.lib PRIVATE "../task8/task8_func.c")
add_executable(CMakeProject8 "")
target_sources(CMakeProject8 PRIVATE "../task8/task8_main.c")
target_link_libraries(CMakeProject8 task8_lib.lib)
target_include_directories(CMakeProject8 PRIVATE "../task8/func.h")