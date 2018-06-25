#pragma once
#include "String.h"
#include "Person.h"
class Student:public Person
{
	String SID;
protected:
	double GPA;
public:
	int semester;
	Student(char NIC_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[], char SID_[], double gpa_, int semester_);
	~Student();
	void Sdisplay();
	void setNIC(char NIC_[]);
	void setname(char name_[]);
	void SsetDOB(int day, int month, int year);
	void Ssetaddress(int houseno_, int laneno_, char province_[], char city_[]);
	void setSID(char SID_[]);
	void setgpa(double gpa_);
	void setsemester(int semester_);
	char *getNIC();
	char *getname();
	Date getDOB();
	Address getproperty();
	Address getaddress();
	char *getSID();
	double getgpa();
	int getsemester();


};