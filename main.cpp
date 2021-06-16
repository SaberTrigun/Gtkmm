//#include <gtkmm.h>
#include "elemControls.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	ElemControls buttons;

	return app->run(buttons);
}
