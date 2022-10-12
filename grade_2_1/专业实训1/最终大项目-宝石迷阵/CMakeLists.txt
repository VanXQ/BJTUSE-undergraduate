cmake_minimum_required(VERSION 3.20)
project(Bejeweled.PRO)

set(CMAKE_CXX_STANDARD 14)

INCLUDE_DIRECTORIES(${QT_INCLUDES})
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${Qt5Core_INCLUDE_DIRS})

INCLUDE_DIRECTORIES(${Qt5GUI_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

SET(CMAKE_PREFIX_PATH D:/CODE/Qt/5.15.0/mingw81_64/lib/cmake)
FIND_PACKAGE(Qt5 COMPONENTS Gui Core Widgets MultiMedia REQUIRED)
#FIND_PACKAGE(QT${QT_VERSION_MAJOR} COMPONENTS Widgets multimedia REQUIRED)

#FIND_PACKAGE(Qt5MultiMediaWidgets REQUIRED)

add_executable(Bejeweled
        WindowAbout.cpp
        WindowAbout.h

        WindowFirst.cpp
        WindowFirst.h

        WindowGame.cpp
        WindowGame.h
        GameLogic.cpp
        GameLogic.h
        WindowIntro.cpp
        WindowIntro.h

        WindowMusic.cpp
        WindowMusic.h
        MusicControl.cpp
        MusicControl.h
        WindowUser.cpp
        WindowUser.h
        RankStorage.cpp
        RankStorage.h
        WindowRank.cpp
        WindowRank.h
        RankLogic.cpp
        RankLogic.h

        WindowTheme.cpp
        WindowTheme.h
        Global.cpp
        Global.h
        main.cpp)

#ÎªÏîÄ¿ÅäÖÃqt
#TARGET_LINK_LIBRARIES(Bejeweled Qt5::Widgets Qt5::Core Qt5::Gui Qt5::MultiMediaWidgets)
target_link_libraries(Bejeweled Qt5::Core Qt5::Gui Qt5::Widgets)


if (WIN64)
    set(DEBUG_SUFFIX)
    if (CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/windows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/windows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()