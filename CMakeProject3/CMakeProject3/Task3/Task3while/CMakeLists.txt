# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject8 "Task3.c" "Task3f2.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(CMakeProject8 PRIVATE "f.h")