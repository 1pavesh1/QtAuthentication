cmake_minimum_required(VERSION 3.19)
project(QtAuthServer LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BUILD_SHARED_LIBS ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Network Sql)

include(FetchContent)

FetchContent_Declare(
  Qt-Secret
  GIT_REPOSITORY https://github.com/QuasarApp/Qt-Secret
  GIT_TAG        1.3.2
)

FetchContent_MakeAvailable(Qt-Secret)

qt_standard_project_setup()

qt_add_executable(QtAuthServer
    main.cpp
    QtAuthServer.h QtAuthServer.cpp
    CommandHandler/InterfaceCommandHandler/InterfaceCommandHandler.h
    CommandHandler/Commands/CommandDataBase.h
    CommandHandler/Commands/CommandServer.h
    Managers/DataBaseManagers/DataBaseUserManager.h
    Managers/InterfaceDAO/InterfaceDAO.h
    InvokerCommand/InvokerCommand.h
    Encryptor/RSAEncryptor.h
    DataBase/DataBase.h
    ConnectedClients/ListConnectedUser.h
)

add_subdirectory(${CMAKE_SOURCE_DIR}/../Common ${CMAKE_BINARY_DIR}/Common)

target_link_libraries(QtAuthServer
    PRIVATE
        Qt::Core
        Qt::Network
        Qt::Sql
        Common
    PUBLIC
        Qt-Secret
)

target_include_directories(QtAuthServer
    PRIVATE
        ${CMAKE_SOURCE_DIR}/../Data
        ${CMAKE_SOURCE_DIR}/../Common
        ${CMAKE_SOURCE_DIR}/DataBase
)

include(GNUInstallDirs)

install(TARGETS QtAuthServer
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
