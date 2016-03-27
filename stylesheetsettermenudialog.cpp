#include "stylesheetsettermenudialog.h"

#include <cassert>
#include <iostream>

#include "trace.h"
#include "testtimer.h"

int ribi::StyleSheetSetterMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 1;
  }
  assert(!"TODO");
  return 1;
}

ribi::About ribi::StyleSheetSetterMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "StyleSheetSetter",
    "tool to experiment with Qt stylesheets",
    "January 17th of 2016",
    "2013-2016",
    "http://www.richelbilderbeek.nl/ToolStyleSheetSetter.htm",
    GetVersion(),
    GetVersionHistory());
  //a.AddLibrary("ProFile version: " + QtCreatorProFile::GetVersion());
  return a;
}

ribi::Help ribi::StyleSheetSetterMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::StyleSheetSetterMenuDialog::GetVersion() const noexcept
{
  return "2.0";
}

std::vector<std::string> ribi::StyleSheetSetterMenuDialog::GetVersionHistory() const noexcept
{
  return {
   "2013-01-09: version 0.1: initial version with a main dialog only",
   "2013-11-29: version 1.0: conformized to ProjectRichelBilderbeek",
   "2015-04-19: version 1.1: start with a nice example stylesheet",
   "2016-01-17: version 2.0: moved to own GitHub"
  };
}
