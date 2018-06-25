#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	Date(const Date&);
	bool inputDate();
	void copyDate(Date&);
	bool inputCompleteDate(int, int, int);
	Date& getDate() const;
	void retrieveDate(int&, int&, int&) const;
	void showDate() const;
	bool isEqual(Date&);
	bool isLeapYear();
	void setday(int day_);
	void setmonth(int month_);
	void setyear(int year_);
	int getday();
	int getmonth();
	int getyear();
	~Date();
};