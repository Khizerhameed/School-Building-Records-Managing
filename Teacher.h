#pragma once
#include "Person.h"
#include "Student.h"
#include "String.h"
class Teacher : public Person
{
	String Teacher_ID;
	double salary;

public:
	Student *Teacher_assistant;
	Teacher(char NIC_[],char Teacher_ID_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[], double salary_,Student *student=nullptr);
	void set_TeacherID(char Teacher_ID_[]);
	~Teacher();
	void Tdisplay();
	void set_NIC(char NIC_[]);
	void set_Name(char name_[]);
	void set_DOB(int day, int month, int year);
	void set_Address(int houseno, int laneno, char province[], char city[]);
	void set_Salary(double salary_);
	void set_TeacherAssistnt(Student *student = nullptr);
	

};