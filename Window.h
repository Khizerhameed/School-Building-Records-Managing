#pragma once 
#include "Equipment.h"
#include "String.h"
class Window:public Equipment
{
public:
	Window(char color_[], char material_[]);
	void set_window_colour(char color_[]);
	void set_window_material(char material_[]);
	void window_display();
	~Window();
};