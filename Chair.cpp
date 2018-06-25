#include"Chair.h"
#include <iostream>
using namespace std;

Chair::Chair(char color_[], char material_[]) :Equipment(color_,material_)
{
	
}

void Chair::set_chair_colour(char color_[])
{
	Equipment::set_color(color_);
}
void Chair::set_chair_material(char material_[])
{
	Equipment::set_material(material_);
}
void Chair::Chair_display()
{
	cout << "\nCHAIR: ";
	Equipment::display();
}
Chair::~Chair()
{

}