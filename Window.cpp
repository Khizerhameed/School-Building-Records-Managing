#include "Window.h"
#include <iostream>
using namespace std;


Window::Window(char color_[], char material_[]) :Equipment(color_,material_)
{

}
void Window::set_window_colour(char color_[])
{
	Equipment::set_color(color_);
}
void Window::set_window_material(char material_[])
{
	Equipment::set_material(material_);
}
void Window::window_display()
{
	cout << "\nWINDOW: \n";
	Equipment::display();
}
Window::~Window()
{

}