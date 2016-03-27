include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)

#Specific
include(../StyleSheetSetter/StyleSheetSetterDesktop.pri)

SOURCES += qtmain.cpp

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
