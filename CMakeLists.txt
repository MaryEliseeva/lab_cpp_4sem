﻿# CMakeList.txt: проект CMake для lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Копируем файл task.txt в директорию сборки
configure_file(${CMAKE_SOURCE_DIR}/task.txt ${CMAKE_BINARY_DIR}/task.txt COPYONLY)

# Указываем рабочую директорию
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

project ("lab2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab1 "lab2.cpp" "lab2.h" "main.cpp")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET lab1 PROPERTY CXX_STANDARD 20)
endif()
