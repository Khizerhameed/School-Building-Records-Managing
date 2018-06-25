#pragma once
#include "String.h"
#include "Chair.h"
#include "Date.h"
#include "Student.h"
#include "Sweeper.h"
#include "Teacher.h"
#include "Window.h"
class School_Building
{
public:
	Chair *C;
	Window *W;
	Sweeper *S;
	Teacher *T;
	Student *STUDENT;
	School_Building();
	School_Building(Chair *chair, Window *window, Sweeper *s, Teacher *t, Student *student);



};