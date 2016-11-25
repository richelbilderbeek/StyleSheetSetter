# C++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
# Qt does not go well with -Weffc++
QMAKE_CXXFLAGS += -Wall -Wextra -Werror -std=c++14

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
