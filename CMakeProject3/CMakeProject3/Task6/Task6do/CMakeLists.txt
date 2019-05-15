# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject18 "Task6.c" "Task1f3.c" "Task2f3.c" "Task3f3.c" "Task4f3.c" "Task5f3.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(CMakeProject18 PRIVATE "f.h")