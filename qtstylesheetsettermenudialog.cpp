

#include "qtstylesheetsettermenudialog.h"

#include "qtaboutdialog.h"
#include "stylesheetsettermenudialog.h"
#include "qtstylesheetsettermaindialog.h"
#include "ui_qtstylesheetsettermenudialog.h"


ribi::QtStyleSheetSetterMenuDialog::QtStyleSheetSetterMenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QtStyleSheetSetterMenuDialog)
{
  ui->setupUi(this);
  this->setStyleSheet(GetExampleStylesheet().c_str());
}

ribi::QtStyleSheetSetterMenuDialog::~QtStyleSheetSetterMenuDialog() noexcept
{
  delete ui;
}

std::string ribi::QtStyleSheetSetterMenuDialog::GetExampleStylesheet() const noexcept
{
  return
    "QDialog\n"
    "{\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #f0f, stop: 1 #0ff);\n"
    "}\n"
    "\n"
    "QPlainTextEdit\n"
    "{\n"
    "  font: 14 bold \"monospace\" \"courier\";\n"
    "}\n"
    "\n"
    "QSlider, QPushButton, QDial\n"
    "{\n"
    "  color: #000;\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #f0f, stop: 1 #0ff);\n"
    "}\n"
    "\n"
    "QPushButton:enabled\n"
    "{\n"
    "  color: #000;\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #f0f, stop: 1 #fff);\n"
    "}\n"
    "\n"
    "QPushButton#button_with_icon\n"
    "{\n"
    "  color: #000;\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 #f0f, stop: 1 #ff0);\n"
    "}\n"
    "\n"
    "QPushButton:disabled\n"
    "{\n"
    "  color: #000;\n"
    "  background-color: qradialgradient("
      "cx: 0.5, cy: 0.5,fx: 0.5, fy: 0.5,radius: 0.5, stop: 0 #fff, stop: 1 #6f6);\n"
    "  border: 3px solid #0f0\n"
    "}\n"
  ;
}

void ribi::QtStyleSheetSetterMenuDialog::on_button_start_clicked()
{
  QtStyleSheetSetterMainDialog d(GetExampleStylesheet());
  //this->ShowChild(&d);
  d.exec();
}

void ribi::QtStyleSheetSetterMenuDialog::on_button_about_clicked()
{
  QtAboutDialog d(StyleSheetSetterMenuDialog().GetAbout());
  d.setStyleSheet(GetExampleStylesheet().c_str());
  d.exec();
}

void ribi::QtStyleSheetSetterMenuDialog::on_button_quit_clicked()
{
  this->close();
}
