#pragma once
#include "String.h"
class Address
{
	String city;
	String province;
	int laneno;
	int houseno;
public:
	Address();
	
	Address(char city_[], char province_[], int laneno_, int houseno_);
	void setcity(char city_[]);
	void setprovince(char province_[]);
	void setlaneno(int laneno_);
	void sethouseno(int houseno_);
	char *getcity();
	char *getprovince();
	int getlaneno();
	int gethouseno();
	void display();
	~Address();
};