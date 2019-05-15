# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject16 "Task6.c" "Task1f1.c" "Task2f1.c" "Task3f1.c" "Task4f1.c" "Task5f1.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_include_directories(CMakeProject16 PRIVATE "f.h")