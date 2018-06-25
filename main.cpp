#include <iostream>
#include "Student.h"
#include "Person.h"
#include "String.h"
#include "Address.h"
#include "Date.h"
#include "Teacher.h"
using namespace std;



int main()
{
	Student *S;
	S = new Student("354042124997-2", "Khizer HAMEED", 2, 10, 1996, 57, 3, "Punjab", "Lahore", "L1F16BSCS0294", 2.78, 4);
	Teacher T("354042124997-1", "22hjsh", "AAdil", 10, 3, 1994, 22, 3, "Punjab", "Lahore", 150000, S);
	T.Tdisplay();
	system("pause");


	return 0;
}