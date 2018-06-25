#include "School_Building.h"
#include <iostream>
using namespace std;

School_Building::School_Building()
{

}
School_Building::School_Building(Chair *chair, Window *window, Sweeper *s, Teacher *t, Student *student)
{
	C = chair;
	W = window;
	S = s;
	T = t;
	STUDENT = student;
}