#include <iostream>
#include "Address.h"
using namespace std;
Address::Address()
{

}


Address::Address(char city_[], char province_[], int laneno_, int houseno_)
{
	city.setchar(city_);
	province.setchar(province_);
	laneno = laneno_;
	houseno = houseno_;

}
void Address:: setcity(char city_[])
{
	city.setchar(city_);
}
void Address::setprovince(char province_[])
{
	province.setchar(province_);
}
void Address::setlaneno(int laneno_)
{
	laneno = laneno_;
}
void Address::sethouseno(int houseno_)
{
	houseno = houseno_;
}
char* Address::getcity()
{
	return city.getch();
}
char *Address::getprovince()
{
	return province.getch();
}
int Address::getlaneno()
{
	return laneno;
}
int Address::gethouseno()
{
	return houseno;
}
void Address::display()
{
	cout << "\nAddress: \nLane No: " << laneno << ", House No: " << houseno << ", " ;
	province.chdisplay();
	cout << ", ";
	city.chdisplay();
}
Address::~Address()
{

}