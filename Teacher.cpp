#include <iostream>
#include "Teacher.h"
#include "Student.h"
using namespace std;


Teacher::Teacher(char NIC_[],char Teacher_ID_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[], double salary_, Student *student) :Person(NIC_, name_, day, month, year, houseno1, laneno1, province1, city1)
{
	salary = salary_;
	Teacher_assistant = student;
	Teacher_ID.setchar(Teacher_ID_);

}
void Teacher::set_TeacherID(char Teacher_ID_[])
{
	Teacher_ID.setchar(Teacher_ID_);
}
Teacher::~Teacher()
{
	delete Teacher_assistant;
}
void Teacher::Tdisplay()
{
	cout << "Teacher INFO:\n";
	cout << "Teacher ID: ";
	Teacher_ID.chdisplay();
	Person::display();
	cout << "\nTeacher Assistant INFO:\n";
	Teacher_assistant->Sdisplay();
}
void Teacher::set_NIC(char NIC_[])
{
	Person::setNIC_(NIC_);

}
void Teacher::set_Name(char name_[])
{
	Person::setname_(name_);
}
void Teacher::set_DOB(int day, int month, int year)
{
	Person::setDOB_(day, month, year);
}
void Teacher::set_Address(int houseno, int laneno, char province[], char city[])
{
	Person::setaddress(houseno, laneno, province, city);
}
void Teacher::set_Salary(double salary_)
{
	salary = salary_;
}
void Teacher::set_TeacherAssistnt(Student *student)
{
	Teacher_assistant = student;
}
