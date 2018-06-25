#pragma once
#include "String.h"
class Equipment
{
	String colour;
	String material;
public:
	Equipment(char colour_[], char material_[]);
	~Equipment();
	void display();
	void set_color(char colour_[]);
	void set_material(char material_[]);
};