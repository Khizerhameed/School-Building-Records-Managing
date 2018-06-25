#pragma once
#include "Equipment.h"
#include "Chair.h"
#include "Window.h"
#include <iostream>
using namespace std;

class Equipment_Factory
{
public:
	static Equipment *Create_Equipment(char option, char colour_[], char material_[])
	{
		if (option == 'C' || option == 'c')
		{
			return (new Chair(colour_, material_));
		}
		else if (option == 'W' || option == 'w')
		{
			return (new Window(colour_, material_));
		}
		else
		{
			return NULL;
		}
	}
};