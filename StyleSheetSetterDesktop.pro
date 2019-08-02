# C++17
CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# Qt does not go well with -Weffc++
QMAKE_CXXFLAGS += -Wall -Wextra -Werror

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

# Debug and release mode
CONFIG += debug_and_release
CONFIG(release, debug|release) {
  message(Release mode)
  DEFINES += NDEBUG
}

include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)
include(../RibiClasses/CppQtAboutDialog/CppQtAboutDialog.pri)
include(../RibiClasses/CppQtHideAndShowDialog/CppQtHideAndShowDialog.pri)

#Specific
include(../StyleSheetSetter/StyleSheetSetterDesktop.pri)

SOURCES += qtmain.cpp

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
