#include "Student.h"
#include <iostream>
using namespace std;




Student::Student(char NIC_[], char name_[], int day, int month, int year, int houseno1, int laneno1, char province1[], char city1[], char SID_[], double gpa_, int semester_):Person(NIC_, name_, day, month, year, houseno1, laneno1, province1, city1)
{
	SID.setchar(SID_);
	GPA = gpa_;
	semester = semester_;


}
Student::~Student()
{

}
void Student::Sdisplay()
{
	cout << "Student:\n";
	Person::display();
	cout << "\nStudent ID: ";
	SID.chdisplay();
	cout << "\nGPA: " << GPA << "\nSemester: "<<semester;


}
void Student::setNIC(char NIC_[])
{
	Person::setNIC_(NIC_);
}
void Student::setname(char name_[])
{
	Person::setname_(name_);
}
void Student::SsetDOB(int day, int month, int year)
{
	Person::setDOB_(day, month, year);

}

void Student::Ssetaddress(int houseno_, int laneno_, char province_[], char city_[])
{
	Person::setaddress(houseno_,laneno_,province_,city_);
}
void Student::setSID(char SID_[])
{
	SID.setchar(SID_);

}
void Student::setgpa(double gpa_)
{
	GPA = gpa_;
}
void Student::setsemester(int semester_)
{
	semester = semester_;
}
char *Student::getNIC()
{
	return Person::getNIC();
}
char * Student::getname()
{
	return Person::getname();
}
Date Student::getDOB()
{
	return Person::getdob();
}

char * Student::getSID()
{
	return SID.getch();
}
double Student::getgpa()
{
	return GPA;
}
int Student::getsemester()
{
	return semester;
}

