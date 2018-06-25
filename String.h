#pragma once 
class String
{
	char * ch;
public:
	String();
	String(char ch_[]);
	void setchar(char ch_[]);
	char * getch();
	void chdisplay();
	~String();

	
};