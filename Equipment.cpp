#include <iostream>
#include "Equipment.h"
using namespace std;

Equipment::Equipment(char colour_[], char material_[])
{
	colour.setchar(colour_);
	material.setchar(material_);
}
Equipment::~Equipment()
{

}
void Equipment::display()
{
	cout << "\nColour: ";
	colour.chdisplay();
	cout << "\nMaterial: ";
	material.chdisplay();
}
void Equipment::set_color(char colour_[])
{
	colour.setchar(colour_);
}
void Equipment::set_material(char material_[])
{
	material.setchar(material_);
}