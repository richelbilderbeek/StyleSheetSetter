

#include <QApplication>
#include "qtstylesheetsettermenudialog.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::QtStyleSheetSetterMenuDialog w;
  w.show();
  return a.exec();
}
