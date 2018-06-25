#include <iostream>
#include"Person.h"
using namespace std;

Person::Person(char NIC_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[])
{
	NIC.setchar(NIC_);
	name.setchar(name_);
	DOB.setday(day);
	DOB.setmonth(month);
	DOB.setyear(year);
	address = new Address;
	address->setcity(city1);
	address->setprovince(province1);
	address->setlaneno(laneno1);
	address->sethouseno(houseno1);

}
Person::~Person()
{
	
	delete address;
}
void Person::display()
{
	cout << "\nName: ";
	name.chdisplay();
	cout << "\nNIC: ";
	NIC.chdisplay();
	cout << "Date of Birth: ";
	DOB.showDate();
	cout << "\nAddress: ";
	address->display();
}
void Person::setNIC_(char NIC_[])
{
	NIC.setchar(NIC_);

}
void Person::setname_(char name_[])
{
	name.setchar(name_);
}
void Person::setDOB_(int day, int month, int year)
{
	DOB.setday(day);
	DOB.setmonth(month);
	DOB.setyear(year);

}

void Person::setaddress(int houseno_, int laneno_, char province_[], char city_[])
{
	address->setcity(city_);
	address->setprovince(province_);
	address->setlaneno(laneno_);
	address->sethouseno(houseno_);
}
char* Person::getNIC()
{
	return NIC.getch();
}
char* Person::getname()
{
	return name.getch();
}
Date Person::getdob()
{
	Date temp;
	temp = DOB.getDate();
	return temp;
}

