cmake_minimum_required(VERSION 3.19)
project(QtAuthentication LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(QtAuthentication
    WIN32 MACOSX_BUNDLE
    main.cpp
    AuthWindow.cpp AuthWindow.h AuthWindow.ui
    RegWindow.h RegWindow.cpp RegWindow.ui
    WelcomeWindow.h WelcomeWindow.cpp WelcomeWindow.ui
)

target_link_libraries(QtAuthentication
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS QtAuthentication
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET QtAuthentication
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
