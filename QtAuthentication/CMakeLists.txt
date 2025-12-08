cmake_minimum_required(VERSION 3.19)
project(QtAuthentication LANGUAGES CXX)

set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(QtAuthentication
    WIN32 MACOSX_BUNDLE
    main.cpp

    # Статическая библиотека
    ../Data/DTO/UserModel.h
    ../Data/Enum/TypeNotification.h

    # UI файлы
    AuthWindow.h AuthWindow.cpp AuthWindow.ui
    RegWindow.h RegWindow.cpp RegWindow.ui
    WelcomeWindow.h WelcomeWindow.cpp WelcomeWindow.ui
    ConfirmationAccessCodeWindow.h ConfirmationAccessCodeWindow.cpp ConfirmationAccessCodeWindow.ui
    RepairPasswordWindow.h RepairPasswordWindow.cpp RepairPasswordWindow.ui

    # Заголовочные файлы
    InterfaceWindows/BaseWindow.h
    Animations/AnimationInterface/AnimtaionInterface.h Animations/AnimationWidgets/AnimationSwapFrame.h
    CustomWidgets/WidgetInterface/CommonCustomWidgetInterface.h CustomWidgets/Widgets/NotificationWidget.h
    Validator/Validators/ValidatorUserInfo.h

    IMG.qrc
)

target_link_libraries(QtAuthentication
    PRIVATE
        Qt::Core
        Qt::Widgets
)

target_include_directories(QtAuthentication
    PRIVATE
        ${CMAKE_SOURCE_DIR}/../Data
        ${CMAKE_SOURCE_DIR}/CustomWidgets/Widgets
        ${CMAKE_SOURCE_DIR}/InterfaceWindows
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
