cmake_minimum_required(VERSION 3.19)
project(QtAuthServer LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(QtAuthServer
    main.cpp
    QtAuthServer.h QtAuthServer.cpp
)

add_subdirectory(${CMAKE_SOURCE_DIR}/../Common ${CMAKE_BINARY_DIR}/Common)

find_package(Qt6 COMPONENTS Core Network REQUIRED)

target_link_libraries(QtAuthServer
    PRIVATE
        Qt::Core
        Qt::Network
        Common
)

target_include_directories(QtAuthServer
    PRIVATE
        ${CMAKE_SOURCE_DIR}/../Data
        ${CMAKE_SOURCE_DIR}/../Common
)

include(GNUInstallDirs)

install(TARGETS QtAuthServer
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
