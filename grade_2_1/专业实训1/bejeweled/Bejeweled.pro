QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Global.cpp \
    WindowAbout.cpp \
    WindowGame.cpp \
    GameLogic.cpp \
    WindowIntro.cpp \
    WindowMusic.cpp \
    MusicControl.cpp \
    WindowUser.cpp \
    RankStorage.cpp \
    WindowRank.cpp \
    RankLogic.cpp \
    WindowTheme.cpp \
    main.cpp \
    WindowFirst.cpp

HEADERS += \
    Global.h \
    WindowAbout.h \
    WindowFirst.h \
    WindowGame.h \
    GameLogic.h \
    WindowIntro.h \
    WindowMusic.h \
    MusicControl.h \
    WindowUser.h \
    RankStorage.h \
    WindowRank.h \
    RankLogic.h \
    WindowTheme.h

FORMS += \
    WindowAbout.ui \
    WindowFirst.ui \
    WindowGame.ui \
    WindowIntro.ui \
    WindowMusic.ui \
    WindowUser.ui \
    WindowRank.ui \
    WindowTheme.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

QT += multimediawidgets


RC_ICONS = exe_ico.ico
