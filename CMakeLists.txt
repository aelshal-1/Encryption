cmake_minimum_required(VERSION 3.9.1)

set(PROJECT_NAME Cryptography)
project(${PROJECT_NAME})

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "Build in another folder")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(SOURCES 
    Application.cpp
    AES.cpp
    AESApplication.cpp
    main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})