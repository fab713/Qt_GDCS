#-------------------------------------------------
#
# Project created by QtCreator 2021-03-08T09:15:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gdcs
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainpage.cpp \
    welcomepage.cpp \
    commonpushbutton.cpp \
    firstwaypage.cpp \
    otherwaypage.cpp \
    busbarpage.cpp \
    itembusbarwidget.cpp \
    tabwidget.cpp

HEADERS += \
        mainpage.h \
    welcomepage.h \
    commonpushbutton.h \
    firstwaypage.h \
    otherwaypage.h \
    busbarpage.h \
    itembusbarwidget.h \
    tabwidget.h

FORMS += \
        mainpage.ui \
    welcomepage.ui \
    firstwaypage.ui \
    otherwaypage.ui \
    busbarpage.ui \
    itembusbarwidget.ui \
    tabwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    res/BackButtonSound.wav \
    res/ConFlipSound.wav \
    res/LevelWinSound.wav \
    res/TapButtonSound.wav \
    res/BackButton.png \
    res/BackButtonSelected.png \
    res/background.png \
    res/BoardNode.png \
    res/busBarBkg.png \
    res/Coin0001.png \
    res/Coin0002.png \
    res/Coin0003.png \
    res/Coin0004.png \
    res/Coin0005.png \
    res/Coin0006.png \
    res/Coin0007.png \
    res/Coin0008.png \
    res/LevelCompletedDialogBg.png \
    res/LevelIcon.png \
    res/MenuSceneBg.png \
    res/MenuSceneStartButton.png \
    res/OtherSceneBg.png \
    res/PlayLevelSceneBg.png \
    res/Title.png \
    res/BackButtonSound.wav \
    res/ConFlipSound.wav \
    res/LevelWinSound.wav \
    res/TapButtonSound.wav \
    res/BackButton.png \
    res/BackButtonSelected.png \
    res/background.png \
    res/BoardNode.png \
    res/busBarBkg.png \
    res/Coin0001.png \
    res/Coin0002.png \
    res/Coin0003.png \
    res/Coin0004.png \
    res/Coin0005.png \
    res/Coin0006.png \
    res/Coin0007.png \
    res/Coin0008.png \
    res/LevelCompletedDialogBg.png \
    res/LevelIcon.png \
    res/MenuSceneBg.png \
    res/MenuSceneStartButton.png \
    res/OtherSceneBg.png \
    res/PlayLevelSceneBg.png \
    res/switchBkg1.png \
    res/switchBkg2.png \
    res/Title.png \
    res/BackButtonSound.wav \
    res/ConFlipSound.wav \
    res/LevelWinSound.wav \
    res/TapButtonSound.wav \
    res/BackButton.png \
    res/BackButtonSelected.png \
    res/background.png \
    res/BoardNode.png \
    res/busBarBkg.png \
    res/Coin0001.png \
    res/Coin0002.png \
    res/Coin0003.png \
    res/Coin0004.png \
    res/Coin0005.png \
    res/Coin0006.png \
    res/Coin0007.png \
    res/Coin0008.png \
    res/LevelCompletedDialogBg.png \
    res/LevelIcon.png \
    res/MenuSceneBg.png \
    res/MenuSceneStartButton.png \
    res/OtherSceneBg.png \
    res/PlayLevelSceneBg.png \
    res/switchBkg1.png \
    res/switchBkg2.png \
    res/Title.png \
    res/BackButtonSound.wav \
    res/ConFlipSound.wav \
    res/LevelWinSound.wav \
    res/TapButtonSound.wav \
    res/BackButton.png \
    res/BackButtonSelected.png \
    res/background.png \
    res/BoardNode.png \
    res/busBarBkg.png \
    res/busBarBkg2.png \
    res/busBarBkg3.png \
    res/Coin0001.png \
    res/Coin0002.png \
    res/Coin0003.png \
    res/Coin0004.png \
    res/Coin0005.png \
    res/Coin0006.png \
    res/Coin0007.png \
    res/Coin0008.png \
    res/LevelCompletedDialogBg.png \
    res/LevelIcon.png \
    res/MenuSceneBg.png \
    res/MenuSceneStartButton.png \
    res/OtherSceneBg.png \
    res/PlayLevelSceneBg.png \
    res/switchBkg1.png \
    res/switchBkg2.png \
    res/switchBkg3.png \
    res/swithBkg4.png \
    res/Title.png
