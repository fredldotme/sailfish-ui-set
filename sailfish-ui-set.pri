CONFIG += qt c++11
QT += quick qml

SOURCES += \
    $$PWD/src/entryinfo.cpp \
    $$PWD/src/localfilebrowser.cpp \
    $$PWD/src/filedetailshelper.cpp

HEADERS += \
    $$PWD/src/entryinfo.h \
    $$PWD/src/localfilebrowser.h \
    $$PWD/src/filedetailshelper.h \
    $$PWD/src/sailfish-ui-set.h

INCLUDEPATH += $$PWD/src
DEPENDPATH += $$PWD/src

RESOURCES += \
    $$PWD/sailfish-ui-set.qrc
