cmake_minimum_required(VERSION 3.19)
project(QtAuthServer LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(QtAuthServer
    main.cpp
)

find_package(Qt6 COMPONENTS Core Network REQUIRED)

target_link_libraries(QtAuthServer
    PRIVATE
        Qt::Core
        Qt::Network
)

include(GNUInstallDirs)

install(TARGETS QtAuthServer
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
