#pragma once
#include "Address.h"
#include "Date.h"
#include "String.h"
class Person
{
	String NIC;
	String name;
protected:
	Date DOB;
public:
	Address *address;
	Person(char NIC_[], char name_[], int day, int month, int year, int houseno, int laneno, char city1[], char province1[]);
	~Person();
	 void display();
	void setNIC_(char NIC_[]);
	void setname_(char name_[]);
	void setDOB_(int day, int month, int year);
	
	void setaddress(int houseno_, int laneno_, char province_[],char city_[]);
	char* getNIC();
	char* getname();
	Date getdob();
	



};
