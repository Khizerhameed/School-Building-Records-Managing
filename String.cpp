#include <iostream>
#include "String.h"
using namespace std;
String::String()
{
	ch = new char;
}

String::String(char ch_[])
{
	int count = 0;
	for (int i = 0; ch_[i] != '\0'; i++)
	{
		count++;
	}
	ch = new char[count + 1];
	for (int i = 0; ch_[i] != '\0'; i++)
	{
		ch[i] = ch_[i];
	}
	ch[count] = '\0';
}
void String::setchar(char ch_[])
{
	int count = 0;
	for (int i = 0; ch_[i] != '\0'; i++)
	{
		count++;
	}
	ch = new char[count + 1];
	for (int i = 0; ch_[i] != '\0'; i++)
	{
		ch[i] = ch_[i];
	}
	ch[count] = '\0';

}
char*  String:: getch()
{
	return ch;
}
void String::chdisplay()
{
	cout << ch;
}
String::~String()
{
	delete ch;
}