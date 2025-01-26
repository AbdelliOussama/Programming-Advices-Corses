#include<iostream>
using namespace std;
struct sDate
{
	short Year;
	short Month;
	short Day;
};

bool isLeapYear(short Year)
{
	// if year is divisible by 4 AND not divisible by 100// OR if year is divisible by 400// then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return  0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year? ";
	cin >> Year;
	return Year;
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
int NumberDaysFromtheBeginingOfYear(short Year, short Month, short Day)
{
	int totaldays = 0;

	for (int i = 1; i <= Month - 1; i++)
	{
		totaldays += NumberOfDaysInAMonth(i, Year);
	}
	totaldays += Day;
	return totaldays;
}
sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year) 
{
	sDate Date;
	short RemainingDays = DateOrderInYear;
	short MonthDays = 0; 
	Date.Year = Year; 
	Date.Month = 1;
	while (true)
	{ 
		MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
		if (RemainingDays > MonthDays) 
		{ 
			RemainingDays -= MonthDays;      
			Date.Month++;
		} 
		else 
		{
			Date.Day = RemainingDays; 
			break; 
		}
	}
	return Date;
}
int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();
	short Day = ReadDay();
	short DaysOrderInYear = NumberDaysFromtheBeginingOfYear( Year,Month,Day);
	cout << "\nNumber of Days from the begining of the year is " << DaysOrderInYear << "\n\n"; 
	sDate Date;     Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);  
	cout << "Date for [" << DaysOrderInYear << "] is: ";  
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;
	system("pause>0");
	return 0;
}

