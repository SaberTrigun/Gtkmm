#include "elemControls.h"
#include <iostream>

ElemControls::ElemControls() : 
	m_button	("Hellow World GTK"),
	m_Box_Top	(Gtk::ORIENTATION_VERTICAL),
	m_Box1		(Gtk::ORIENTATION_VERTICAL, 10),
	m_Box2		(Gtk::ORIENTATION_VERTICAL, 10),
	m_RadioButton1	("Choise 1"),
	m_RadioButton2	("Choise 2"),
	m_RadioButton3	("Choice 3")
{
	set_title("Radio buttons");
	set_border_width(0);

	m_RadioButton2.join_group(m_RadioButton1);
	m_RadioButton3.join_group(m_RadioButton1);

	add(m_Box_Top);

	m_Box_Top.pack_start(m_Box1);
	m_Box_Top.pack_start(m_Separator);
	m_Box_Top.pack_start(m_Box2);

	m_Box2.set_border_width(10);
	m_Box1.set_border_width(10);

	m_Box1.pack_start(m_RadioButton1);
	m_Box1.pack_start(m_RadioButton2);
	m_Box1.pack_start(m_RadioButton3);

	m_RadioButton2.set_active();

	m_Box2.pack_start(m_button);

	m_button.set_can_default();
	m_button.grab_default();

	m_button.signal_clicked().connect(sigc::mem_fun(*this, &ElemControls::on_button_clicked));
	
	show_all_children();
	
	//m_button.add_pixlabel("info.xpm", "cool buton");  Установить иконку и текст на кнопке
	//set_border_width(10);
	//m_button.signal_clicked().connect(sigc::mem_fun(*this, &Button::on_button_clicked));

	//add(m_button);

	//m_button.show();
}
ElemControls::~ElemControls(){}
void ElemControls::on_button_clicked(){
	//std::cout << "Hy, it's GTKmm World" << std::endl;
	hide();
}
