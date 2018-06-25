#pragma once
#include "String.h"
#include "Equipment.h"
class Chair:public Equipment
{
	
public:
	Chair(char color_[], char material_[]);
	
	void set_chair_colour(char color_[]);
	void set_chair_material(char material_[]);
	void Chair_display();
	~Chair();
};