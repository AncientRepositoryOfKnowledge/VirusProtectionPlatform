// WindowsForms.cpp : main project file.

#include "stdafx.h"
#include "VirusMainWindow.h"
#include "resource.h"
#include "Splash.h"
#include "Options.h"
#include "ActiveGuard.h"

using namespace WindowsForms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	/*
	Set up the monitor for the hosts file path. This is absolute and should not be deleted.
	Anything else the user can choose.
	Because the HostsPath points to the actual file and not the directory, I need to get the directory by
	removing parts of the String after a certain index. What I would remove is "\hosts" which is six characters.
	So I subtract six from the length.
	*/
	FileMonitor ^ HostMonitor = gcnew FileMonitor(Options::HostsPath->Remove(Options::HostsPath->Length - 6));
	// Create the main window and run it
	Application::Run(gcnew Splash());

}
