#ifndef QTSTYLESHEETSETTERMENUDIALOG_H
#define QTSTYLESHEETSETTERMENUDIALOG_H



#include <QDialog>


namespace Ui {
  class QtStyleSheetSetterMenuDialog;
}

namespace ribi {

class QtStyleSheetSetterMenuDialog final : public QDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtStyleSheetSetterMenuDialog(QWidget *parent = 0);
  QtStyleSheetSetterMenuDialog(const QtStyleSheetSetterMenuDialog&) = delete;
  QtStyleSheetSetterMenuDialog& operator=(const QtStyleSheetSetterMenuDialog&) = delete;
  ~QtStyleSheetSetterMenuDialog() noexcept;
  std::string GetExampleStylesheet() const noexcept;

private slots:
  void on_button_about_clicked();
  void on_button_quit_clicked();
  void on_button_start_clicked();

private:
  Ui::QtStyleSheetSetterMenuDialog *ui;

};

} //~namespace ribi

#endif // QTSTYLESHEETSETTERMENUDIALOG_H
