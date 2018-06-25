#include "Person.h"
#include "String.h"
#pragma once
class Sweeper : public Person
{
	String Sweeper_ID;
	double salary;
public:
	Sweeper(char NIC[], char Sweeper_ID_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[],double salary_);
	~Sweeper();
	void SWdisplay();
	void set_NIC(char NIC[]);
	void set_ID(char ID[]);
	void set_name(char name_[]);
	void set_DOB(int day, int month, int year);
	void set_address(int houseno, int laneno, char province[], char city[]);
	void set_salary(double salary_);

};