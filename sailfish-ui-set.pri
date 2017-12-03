CONFIG += qt c++11
QT += quick qml

SOURCES += \
    $$PWD/src/localfilebrowser.cpp

HEADERS += \
    $$PWD/src/localfilebrowser.h \
    $$PWD/src/sailfish-ui-set.h

INCLUDEPATH += $$PWD/src
DEPENDPATH += $$PWD/src

RESOURCES += \
    $$PWD/sailfish-ui-set.qrc
