#include <gtkmm/button.h>
#include <gtkmm/window.h>
//#include <gtkmm/checkbutton.h>
#include <gtkmm/box.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>


class ElemControls : public Gtk::Window {
	protected:
		Gtk::Button m_button;
		void on_button_clicked();

		Gtk::Box m_Box_Top, m_Box1, m_Box2;
		Gtk::RadioButton m_RadioButton1, m_RadioButton2, m_RadioButton3;
		Gtk::Separator m_Separator;
		
		
	public:
		ElemControls();
		virtual ~ElemControls();
};
