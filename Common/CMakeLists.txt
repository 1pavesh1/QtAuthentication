cmake_minimum_required(VERSION 3.16)

project(Common LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt6 COMPONENTS Core Network REQUIRED)

add_library(Common STATIC
  Common.cpp Common.h
  Sockets/SocketInterface/InterfaceSocketAdapter.h Sockets/SocketInterface/InterfaceSocketAdapter.cpp
  Sockets/SocketsType/SocketAdapter.h Sockets/SocketsType/SocketAdapter.cpp
  ClientSocket/ClientSocketAdapter.h ClientSocket/ClientSocketAdapter.cpp
  ServerSocket/ServerSocketAdapter.h ServerSocket/ServerSocketAdapter.cpp
)

target_link_libraries(Common
  PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Network
)

target_include_directories(Common
    PRIVATE
        ${CMAKE_SOURCE_DIR}/../Data
)

target_compile_definitions(Common PRIVATE COMMON_LIBRARY)
