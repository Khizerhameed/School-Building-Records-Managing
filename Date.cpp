#include <iostream>
#include "Date.h"
using namespace std;


Date::Date()
{
	day = 1;
	month = 1;
	year = 1;
}
Date::Date(int day_, int month_, int year_)
{
	if (year_ <= 9999)
	{
		if ((day_ >= 1 && day_ <= 31) && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12))
		{
			day = day_;
			month = month_;
			year = year_;

		}
		else if ((day_ >= 1 && day_ <= 30) && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
		{
			day = day_;
			month = month_;
			year = year_;
		}
		else if ((day_ >= 1 && day_ <= 29) && (month_ == 2))
		{
			if ((day_ = 29) && (year_ % 4 == 0))
			{
				day = day_;
				month = month_;
				year = year_;
			}
			else if (day_ >= 1 && day_ <= 28)
			{
				day = day_;
				month = month_;
				year = year_;
			}
			else
			{
				day = 1;
				month = 1;
				year = 1;
			}
		}
		else
		{
			day = 1;
			month = 1;
			year = 1;
		}
	}
	else
	{
		day = 1;
		month = 1;
		year = 1;
	}
}
Date::Date(const Date & other)
{
	day = other.day;
	month = other.month;
	year = other.year;

}
bool Date::inputDate()
{
	int day_;
	int month_;
	int year_;
	cout << "\nEnter Date: ";
	cin >> day_;
	cout << "\nEnter Month: ";
	cin >> month_;
	cout << "\nEnter Year: ";
	cin >> year_;
	if (year_ <= 9999)
	{
		if ((day_ >= 1 && day_ <= 31) && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12))
		{
			day = day_;
			month = month_;
			year = year_;
			return true;

		}
		else if ((day_ >= 1 && day_ <= 30) && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
		{
			day = day_;
			month = month_;
			year = year_;
			return true;
		}
		else if ((day_ >= 1 && day_ <= 29) && (month_ == 2))
		{
			if ((day_ = 29) && (year_ % 4 == 0))
			{
				day = day_;
				month = month_;
				year = year_;
				return true;
			}
			else if (day_ >= 1 && day_ <= 28)
			{
				day = day_;
				month = month_;
				year = year_;
				return true;
			}
			else
			{
				day = 1;
				month = 1;
				year = 1;
				return false;
			}
		}
		else
		{
			day = 1;
			month = 1;
			year = 1;
			return false;
		}
	}
	else
	{
		day = 1;
		month = 1;
		year = 1;
		return false;
	}
}
void Date::copyDate(Date& other)
{
	other.day = day;
	other.month = month;
	other.year = year;
}
bool Date::inputCompleteDate(int day_, int month_, int year_)
{
	if (year_ <= 9999)
	{
		if ((day_ >= 1 && day_ <= 31) && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12))
		{
			day = day_;
			month = month_;
			year = year_;
			return true;

		}
		else if ((day_ >= 1 && day_ <= 30) && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
		{
			day = day_;
			month = month_;
			year = year_;
			return true;
		}
		else if ((day_ >= 1 && day_ <= 29) && (month_ == 2))
		{
			if ((day_ = 29) && (year_ % 4 == 0))
			{
				day = day_;
				month = month_;
				year = year_;
				return true;
			}
			else if (day_ >= 1 && day_ <= 28)
			{
				day = day_;
				month = month_;
				year = year_;
				return true;
			}
			else
			{
				day = 1;
				month = 1;
				year = 1;
				return false;
			}
		}
		else
		{
			day = 1;
			month = 1;
			year = 1;
			return false;
		}
	}
	else
	{
		day = 1;
		month = 1;
		year = 1;
		return false;
	}

}
Date& Date::getDate() const
{
	Date temp(day, month, year);
	return temp;
}
void Date::retrieveDate(int& day_, int& month_, int& year_) const
{
	day_ = day;
	month_ = month;
	year_ = year;
}
void Date::showDate() const
{
	cout << "\nDay: " << day << "\nMonth: " << month << "\nYear: " << year;
}
bool Date::isEqual(Date& other)
{
	if ((day == other.day) && (month == other.month) && (year == other.year))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::isLeapYear()
{
	if (year % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Date::setday(int day_)
{
	if ((day_ >= 1 && day_ <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
	{
		day = day_;


	}
	else if ((day_ >= 1 && day_ <= 30) && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		day = day_;

	}
	else if ((day_ >= 1 && day_ <= 29) && (month == 2))
	{
		if ((day_ = 29) && (year % 4 == 0))
		{
			day = day_;

		}
		else if (day_ >= 1 && day_ <= 28)
		{
			day = day_;

		}
		else
		{
			day = 1;

		}
	}
	else
	{
		day = 1;

	}
}


void Date::setmonth(int month_)
{
	if ((day >= 1 && day <= 31) && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12))
	{
		month = month_;


	}
	else if ((day >= 1 && day <= 30) && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
	{
		month = month_;

	}
	else if ((day >= 1 && day <= 29) && (month_ == 2))
	{
		if ((day = 29) && (year % 4 == 0))
		{
			month = month_;

		}
		else if (day >= 1 && day <= 28)
		{
			month = month_;

		}
		else
		{
			month = 1;

		}
	}
	else
	{
		month = 1;

	}

}

void Date::setyear(int year_)
{
	if (year <= 9999)
	{
		year = year_;
	}
	else
	{
		year = 1;
	}
}
int Date::getday()
{
	return day;
}
int Date::getmonth()
{
	return month;
}
int Date::getyear()
{
	return year;
}
Date::~Date()
{

}