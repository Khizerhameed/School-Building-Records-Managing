#include "Sweeper.h"
#include <iostream>
using namespace std;

Sweeper::Sweeper(char NIC_[], char Sweeper_ID_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[], double salary_) :Person(NIC_, name_, day, month, year, houseno1, laneno1, province1, city1)
{
	salary = salary_;
	Sweeper_ID.setchar(Sweeper_ID_);
}
Sweeper::~Sweeper()
{

}
void Sweeper::SWdisplay()
{
	cout << "\nSweeper ID: ";
	Sweeper_ID.chdisplay();
	cout << "\nSweeper INFO:\n";
	Person::display();
	cout << "\nSalary : " << salary;
}
void Sweeper::set_NIC(char NIC[])
{
	Person::setNIC_(NIC);
}
void Sweeper::set_ID(char ID[])
{
	Sweeper_ID.setchar(ID);
}
void Sweeper::set_name(char name_[])
{
	Person::setname_(name_);
}
void Sweeper::set_DOB(int day, int month, int year)
{
	Person::setDOB_(day, month, year);
}
void Sweeper::set_address(int houseno, int laneno, char province[], char city[])
{
	Person::setaddress(houseno, laneno, province, city);
}
void Sweeper::set_salary(double salary_)
{
	salary = salary_;
}