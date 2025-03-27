#pragma warning(disable : 4996);
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;


 
//Problem Solving#1
long long int ReadNumber() {
	long long int Number = 0;
	cout << "Enter The Number => ";
	cin >> Number;
	return Number;
}

string NumberToText(long long int Number) {
	if (Number == 0)
		return "";

	if (Number >= 1 && Number <= 19) {
		string Arr[] = { "" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten" , "Eleven" , "Twelve" , "Thirteen"
		, "Fourteen" , "Fifteen" , "Sixteen" , "Seventeen" , "Eighteen","Ninteen"};
		return Arr[Number];
	}

	if (Number >= 20 && Number <= 99) {
		string Arr2[] = { "" , "" , "Twenty" , "Thirty" , "Fourty","Fifty" , "Sixty","Seventy" , "Eighty" , "Ninty"};
		return Arr2[Number / 10] + " " + NumberToText(Number % 10);
	}

	if (Number >= 100 && Number <= 199) {
		return "One Hudered " + NumberToText(Number % 100);
	}

	if (Number >= 200 && Number <= 999) {
		return NumberToText(Number / 100) + " Hundered " + NumberToText(Number % 100);
	}

	if (Number >= 1000 && Number <= 1999) {
		return "One Thousand " + NumberToText(Number % 1000);
	}

	if (Number >= 2000 && Number <= 999999) {
		return NumberToText(Number / 1000) + " Thousand " + NumberToText(Number % 1000);
	}

	if (Number >= 1000000 && Number <= 1999999) {
		return "One Million " + NumberToText(Number % 1000000);
	}

	if (Number >= 2000000 && 99999999) {
		return NumberToText(Number / 1000000) + " Million " + NumberToText(Number % 1000000);
	}

	if (Number >= 100000000 && Number <= 1999999999) {
		return "One Billion " + NumberToText(Number % 1000000000);
	}
	else {
		return NumberToText(Number / 1000000000) + " Billion " + NumberToText(Number % 1000000000);

	}

}

////Problem Solving #2
//Leap Year
short EnterYear() {
	short Year = 0; 
	cout << "Enter The Year? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Number) {
	if (Number % 400 == 0)
		return true;

	if (Number % 100 == 0)
		return false;

	if (Number % 4 == 0)
		return true;

	return false;
}

//Problem Solving #3
//Leap Year  (Short Hand)
short enteryear() {
	short year = 0;
	cout << "enter the year? ";
	cin >> year;
	return year;
}

bool isleapyear(short number) {
	return number % 4 == 0 && number % 100 != 0 || number % 400 == 0;
}

////Problem Solving #4
// Print Number of Days Hours Minutes Seconds
short EnterYear() {
	short Year = 0;
	cout << "Enter The Year? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Number) {
	return Number % 4 == 0 && Number % 100 != 0 || Number % 400 == 0;
}

short NumberOfDaysInYear(short Year) {
	return IsLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInYear(short Year) {
	return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinInYear(short Year) {
	return NumberOfHoursInYear(Year) * 60;
}

int NumberOfSecondsInYear(short Year) {
	return NumberOfMinInYear(Year) * 60;
}

////Problem Solving #5
// Print Number of Days Hours Minutes Seconds in month
short EnterYear() {
	short Year = 0;
	cout << "Enter The Year? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Number) {
	return Number % 4 == 0 && Number % 100 != 0 || Number % 400 == 0;
}

short NumberOfDaysInMonth(short Year , short Month) {
	if (Month < 1 || Month > 12)
		return 0;
	
	if (Month == 2)
		return IsLeapYear(Year) ? 29 : 28;

	int Arr[7] = { 1,3,5,7,8,10,12 };

	for (int i = 1; i < 7; i++) {
		if (Arr[i] == Month)
			return 31;
	}
	
	return 30;
}

short NumberOfHoursInMonth(short Year , short Month) {
	return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMinInMonth(short Year , short Month) {
	return NumberOfHoursInMonth(Year , Month) * 60;
}

int NumberOfSecondsInMonth(short Year , short Month) {
	return NumberOfMinInMonth(Year ,Month) * 60;
}

////Problem Solving #6
//// Print Number of Days Hours Minutes Seconds in month
short EnterYear() {
//	short Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//
//bool IsLeapYear(short Number) {
//	return Number % 4 == 0 && Number % 100 != 0 || Number % 400 == 0;
//}
//
//short NumberOfDaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//
//	int Arr12Day[12] = { 31 ,30 ,31 ,30,31,30,31,31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : Arr12Day[Month - 1];
//
//}

//Problem Solving #7
//short EnterYear() {
//	short Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short DayInOrder(short Year, short Month , short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string NameString(short Number) {
//	string Arr[] = { "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };
//	return Arr[Number];
//}

////Problem Solving #8
//Print Calender
//short EnterYear() {
//	short Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//short DayInOrder(short Year, short Month , short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string MonthInString(short Month) {
//	string Arr[] = { "Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "July" , "Aug" , "Sep" , "Oct" , "Nov" , "Dev"};
//	return Arr[Month];
//}
//
//void PrintCalender(short Month, short Year) {
//	short DaysInMonthh = DaysInMonth(Year, Month);
//	short DayInWeek = DayInOrder(Year, Month, 1);
//
//	printf("\n______________________%s______________________", MonthInString(Month).c_str());
//
//	cout << " \n  Sun  Mon  Tues  Wed  Thur  Fri  Sat\n";
//
//	int i;
//	for (i = 0; i < DayInWeek; i++) {
//		cout << "     ";
//	}
//
//	for (int j = 1; j <= DaysInMonthh; j++) {
//		printf("%5d", j);
//
//		if (++i == 7) {
//			cout << endl;
//			i = 0;
//		}
//	}
//
//}

////Problem Solving #9
// Print Calender Of Year
//short EnterYear() {
//	short Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//short DayNameOfWeek(short Year, short Month , short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string MonthInString(short Month) {
//	string Arr[] = { "Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "July" , "Aug" , "Sep" , "Oct" , "Nov" , "Dev"};
//	return Arr[Month -1];
//}
//
//void PrintCalender(short Month, short Year) {
//	short DaysInMonthh = DaysInMonth(Year, Month);
//	short DayInWeek = DayNameOfWeek(Year, Month, 1);
//
//	printf("\n______________________%s______________________", MonthInString(Month).c_str());
//
//	cout << " \n  Sun  Mon  Tues  Wed  Thur  Fri  Sat\n";
//
//	int i;
//	for (i = 0; i < DayInWeek; i++) {
//		cout << "     ";
//	}
//
//	for (int j = 1; j <= DaysInMonthh; j++) {
//		printf("%5d", j);
//
//		if (++i == 7) {
//			cout << endl;
//			i = 0;
//		}
//	}
//
//}
//
//void PrintCalenderOfYear(short Year) {
//	for (short i = 1; i <= 12; i++) {
//		PrintCalender(i, Year);
//		cout << endl;
//	}
//}

////Problem Solving #10
// The Sum Of Days In Months
//short EnterYear() {
//	short Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//int SumOfDays(short Year, short Daay, short Month) {
//	short Sum = 0; 
//
//	for (short i = 1; i < Month; i++) {
//		Sum += DaysInMonth(Year, i);
//	}
//
//	return Sum + Daay;
//}
//

//Problem Solving #11
// Days To Date
// 
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//int SumOfDays(short Year, short Daay, short Month) {
//	short Sum = 0;
//
//	for (short i = 1; i < Month; i++) {
//		Sum += DaysInMonth(Year, i);
//	}
//
//	return Sum + Daay;
//}
//
//struct stDate {
//	short Year = 0;
//	short Month = 0; 
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//stDate TotalDaysToDate(short TotalOfDays , short Year) {
//	stDate Date;
//	short Remaining = TotalOfDays;
//	short DaysInMonthh = 0;
//
//	Date.Year = Year;
//	Date.Month = 1;
//
//	while (true) {
//		DaysInMonthh = DaysInMonth(Year, Date.Month);
//
//		if (Remaining > DaysInMonthh) {
//
//			Remaining -= DaysInMonthh;
//			Date.Month++;
//
//		}
//		else {
//			Date.Day = Remaining;
//			break;
//		}
//	}
//	return Date;
//
//}

////Problem Solving #12
// Add Days To Date
// 
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//int SumOfDays(short Year, short Daay, short Month) {
//	short Sum = 0;
//
//	for (short i = 1; i < Month; i++) {
//		Sum += DaysInMonth(Year, i);
//	}
//
//	return Sum + Daay;
//}
//
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//stDate AddDaysToDate(short Days, stDate Date )  {
//	short Remaining = Days + SumOfDays(Date.Year , Date.Day , Date.Month);
//	short DaysInMonthh = 0;
//
//	Date.Month = 1;
//	while (true) {
//		DaysInMonthh = DaysInMonth(Date.Year, Date.Month);
//
//		if (Remaining > DaysInMonthh) {
//
//			Remaining -= DaysInMonthh;
//			Date.Month++;
//
//			if(Date.Month > 12){
//				Date.Month = 1;
//				Date.Year++;
//			}
//
//		}
//		else {
//			Date.Day = Remaining;
//			break;
//		}
//	}
//	return Date;
//
//}
//

////Problem Solving #13
// Date 1 Less Than Date 2
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false :false  ;
//}

////Problem Solving #14
// Date 1 Equal Date 2
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//bool IsDate1EqualDate2(stDate Date1, stDate Date2) {
	//return Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false;
//}

//Problem Solving #15
// 1 - Check If Its Last Month     2 - Check If Its Last Day
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
// 
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}

////Problem Solving #16
// Increase Date By One
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//void IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//}

////Problem Solving #17
// Get Different Days Between Two Days
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false :false  ;
//}
//short DiffereneBetweenDate(stDate Date1, stDate Date2, bool IncludingEndDay = false) {
//	short Diff = 0;
//
//	while (IsDate1LessThanDate2(Date1, Date2)) {
//
//	Date1 = IncreaseDateByOne(Date1);
//
//	Diff++;
//}
//	return IncludingEndDay ? ++Diff : Diff;
//}


//Problem Solving #18
// Your Age In Days
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false :false  ;
//}
//short DiffereneBetweenDate(stDate Date1, stDate Date2, bool IncludingEndDay = false) {
//	short Diff = 0;
//
//	while (IsDate1LessThanDate2(Date1, Date2)) {
//
//	Diff++;
//	Date1 = IncreaseDateByOne(Date1);
//
//}
//	return IncludingEndDay ? ++Diff : Diff;
//}
//
//stDate GetSytemDate() {
//	stDate Date;
//	time_t t = time(0);
//	tm* now = localtime(&t);
//	Date.Year = now->tm_year + 1900;
//	Date.Month = now->tm_mon + 1;
//	Date.Day = now->tm_wday;
//	return Date;
//}

//Problem Solving #19
// Get Difference Days Between Two Days (If Date2 Bigger Thant Date1)
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false : false;
//}
//
//void SwitchDates(stDate& Date1, stDate& Date2) {
//	stDate Temp;
//	Temp.Year = Date1.Year;
//	Temp.Month = Date1.Month;
//	Temp.Day = Date1.Day;
//
//	Date1.Year = Date2.Year;
//	Date1.Month= Date2.Month;
//	Date1.Day= Date2.Day;
//
//	Date2.Year = Temp.Year;
//	Date2.Month = Temp.Month;
//	Date2.Day = Temp.Day;
//
//}
//
//int DifferenceInDaysNegative(stDate Date1, stDate Date2, bool IncludingLastDay = false) {
//	short Diff = 0; 
//	short ChangeSign = 1;
//	if (!IsDate1LessThanDate2(Date1, Date2)) {
//		SwitchDates(Date1 , Date2);
//		ChangeSign = -1;
//	}
//
//	while (IsDate1LessThanDate2(Date1, Date2)) {
//		Diff++;
//		Date1 = IncreaseDateByOne(Date1);
//	}
//
//	return IncludingLastDay ? ++Diff * ChangeSign : Diff * ChangeSign;
//}

////Problem Solving #20 To 32
// //Functions To Increase Date (By One Day , By X Days , By One Month , By X Month , ....)
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//void IncreaseDateByXDays(stDate& sDate, short Days) {
//	for (int i = 1; i <= Days; i++) {
//		sDate = IncreaseDateByOne(sDate);
//	}
//}
//
//void IncreaseDateByOneWeek(stDate& sDate) {
//	for (int i = 1; i <= 7; i++) {
//		sDate = IncreaseDateByOne(sDate);
//	}
//}
//
//void IncreaseDateByXWeek(stDate& sDate, short Weeks) {
//	for (int i = 1; i <= Weeks; i++) {
//		IncreaseDateByOneWeek(sDate);
//	}
//}
//
//void IncreaseDateByOneMonth(stDate& sDate) {
//	if (sDate.Month == 12) {
//			sDate.Month = 1;
//			sDate.Year++;
//	}
//	else {
//		sDate.Month++;
//	}
//
//	short NumberDaysInMonth = DaysInMonth(sDate.Year, sDate.Month);
//	if (sDate.Day > NumberDaysInMonth) {
//		sDate.Day = NumberDaysInMonth;
//	}
//
//}
//
//void IncreaseDateByXMonth(stDate& sDate, short Month) {
//	for (int i = 1; i <= Month; i++) {
//	 IncreaseDateByOneMonth(sDate);
//	}
//}
//
//void IncreaseDateByOneYear(stDate& sDate) {
//	sDate.Year++;
//}
//
//void IncreaseDateByXYear(stDate& sDate, short Year) {
//	for (int i = 1; i <= Year; i++) {
//		IncreaseDateByOneYear(sDate);
//	}
//}
//
//void IncreaseDateByXYearFaster(stDate& sDate, short Year) {
//	sDate.Year += Year;
//}
//
//void IncreaseDateByOneDecade(stDate& sDate) {
//	sDate.Year += 10;
//}
//
//void IncreaseDateByXDecade(stDate& sDate, short Decade) {
//	for (int i = 1; i <= Decade; i++) {
//		IncreaseDateByOneDecade(sDate);
//	}
//}
//
//void IncreaseDateByXDecadeFaster(stDate& sDate, short Decade) {
//	sDate.Year += Decade * 10;
//}
//
//void IncreaseDateByOneCentury(stDate& sDate) {
//	sDate.Year += 100;
//}
//
//
//void IncreaseDateByOneMillenium(stDate& sDate) {
//	sDate.Year += 1000;
//}

//Problem Solving #33 To 46
// //Functions To Decrease Date (By One Day , By X Days , By One Month , By X Month , ....)
//
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate DecreasaeDateByOne(stDate& Date) {
//	if (Date.Day == 1) {
//		if (Date.Month == 1) {
//			Date.Day = 31;
//			Date.Month = 12;
//			Date.Year--;
//		}
//		else {
//			Date.Month--;
//			Date.Day = DaysInMonth(Date.Year, Date.Month);
//
//		}
//	}
//	else {
//		Date.Day--;
//	}
//
//	return Date;
//}
//
//void DecreaseDateByXDays(stDate& sDate, short Days) {
//	for (int i = 1; i <= Days; i++) {
//		sDate = DecreasaeDateByOne(sDate);
//	}
//}
//
//void DecreaseDateByOneWeek(stDate& sDate) {
//	for (int i = 1; i <= 7; i++) {
//		sDate = DecreasaeDateByOne(sDate);
//	}
//}
//
//void DecreaseDateByXWeek(stDate& sDate, short Weeks) {
//	for (int i = 1; i <= Weeks; i++) {
//		DecreaseDateByOneWeek(sDate);
//	}
//}
//
//void DecreaseDateByOneMonth(stDate& sDate) {
//	if (sDate.Month == 1) {
//		sDate.Month = 12;
//		sDate.Year--;
//	}
//	else {
//		sDate.Month--;
//	}
//
//	short NumberDaysInMonth = DaysInMonth(sDate.Year, sDate.Month);
//	if (sDate.Day > NumberDaysInMonth) {
//		sDate.Day = NumberDaysInMonth;
//	}
//
//}
//
//void DecreaseDateByXMonth(stDate& sDate, short Month) {
//	for (int i = 1; i <= Month; i++) {
//		DecreaseDateByOneMonth(sDate);
//	}
//}
//
//void DecreaseDateByOneYear(stDate& sDate) {
//	sDate.Year--;
//}
//
//void DecreaseDateByXYear(stDate& sDate, short Year) {
//	for (int i = 1; i <= Year; i++) {
//		DecreaseDateByOneYear(sDate);
//	}
//}
//
//void DecreaseDateByXYearFaster(stDate& sDate, short Year) {
//	sDate.Year -= Year;
//}
//
//void DecreaseDateByOneDecade(stDate& sDate) {
//	sDate.Year -= 10;
//}
//
//void DecreaseDateByXDecade(stDate& sDate, short Decade) {
//	for (int i = 1; i <= Decade; i++) {
//		DecreaseDateByOneDecade(sDate);
//	}
//}
//
//void DecreaseDateByXDecadeFaster(stDate& sDate, short Decade) {
//	sDate.Year -= Decade * 10;
//}
//
//void DecreaseDateByOneCentury(stDate& sDate) {
//	sDate.Year -= 100;
//}
//
//void DecreaseDateByOneMillenium(stDate& sDate) {
//	sDate.Year -= 1000;
//}

//Problem Solving #47 To 53
// 1-Check If Is Weekend   2- Check if is business day   3- Check if is end of week  4- days untill the end of week 5- days untill the end of month
// 6- Days untill the end of year
//
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//short DayOfWeekOrder(short Year, short Month , short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string MonthInString(short Day) {
//	string Arr[] = {"Sun" , "Mon" , "Tue" , "Wed" , "Thur" , "Fri" ,"Sat"};
//	return Arr[Day];
//}
//
//short DayOfWeekOrder(stDate sDate) {
//	return DayOfWeekOrder(sDate.Year, sDate.Month, sDate.Day);
//}
//
//
//bool IsEndOfWeek(stDate Date) {
//	return DayOfWeekOrder(Date) == 6;
//}
//
//bool IsWeekEnd(stDate Date) {
//	short DayOrder = DayOfWeekOrder(Date);
//	return DayOrder == 5 || DayOrder == 6;
//}
//
//
//bool IsBusinessDay(stDate Date) {
//	return !(IsWeekEnd(Date));
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false :false  ;
//}
//
//short DiffereneBetweenDate(stDate Date1, stDate Date2, bool IncludingEndDay = false) {
//	short Diff = 0;
//
//	while (IsDate1LessThanDate2(Date1, Date2)) {
//
//	Date1 = IncreaseDateByOne(Date1);
//
//	Diff++;
//}
//	return IncludingEndDay ? ++Diff : Diff;
//}
//
//short DaysUntillTheEndOfWeek(stDate Date) {
//	return 6 - DayOfWeekOrder(Date.Year, Date.Month, Date.Day);
//}
//
//short DaysUntillTheEndOfMonth(stDate Date) {
//	stDate EndOfMonth;
//	EndOfMonth.Year = Date.Year;
//	EndOfMonth.Month = Date.Month;
//	EndOfMonth.Day = DaysInMonth(EndOfMonth.Year, EndOfMonth.Month);
//
//	return DiffereneBetweenDate(Date, EndOfMonth, true);
//}
//
//short DaysUntillTheEndOfYear(stDate Date) {
//	stDate EndOfYear;
//	EndOfYear.Year = Date.Year;
//	EndOfYear.Month = 12;
//	EndOfYear.Day = 31;
//
//	return DiffereneBetweenDate(Date, EndOfYear, true);
//}

//Problem Solving #54
// Count actual vacataion days
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//short DayOfWeekOrder(short Year, short Month , short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string MonthInString(short Day) {
//	string Arr[] = {"Sun" , "Mon" , "Tue" , "Wed" , "Thur" , "Fri" ,"Sat"};
//	return Arr[Day];
//}
//
//short DayOfWeekOrder(stDate sDate) {
//	return DayOfWeekOrder(sDate.Year, sDate.Month, sDate.Day);
//}
//
//
//bool IsWeekEnd(stDate Date) {
//	short DayOrder = DayOfWeekOrder(Date);
//	return DayOrder == 5 || DayOrder == 6;
//}
//
//
//bool IsBusinessDay(stDate Date) {
//	return !(IsWeekEnd(Date));
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//bool IsDate1LessThanDate2(stDate Date1, stDate Date2) {
//	return Date1.Year < Date2.Year ? true : Date1.Year == Date2.Year ? Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false :false  ;
//}
//
//short CountActualVacation(stDate Date1, stDate Date2, bool IncludingEndDay = false) {
//	short Diff = 0;
//
//	while (IsDate1LessThanDate2(Date1, Date2)) {
//
//		if (IsBusinessDay(Date1)) 
//		Diff++;
//
//		Date1 = IncreaseDateByOne(Date1);
//}
//
//
//	return IncludingEndDay ? ++Diff : Diff;
//}

//Problem Solving #55
// Calculate Vacation Return Date 
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//short DayOfWeekOrder(short Year, short Month, short Day) {
//	short A = ((14 - Month) / 12);
//	short Y = Year - A;
//	short M = Month + (12 * A) - 2;
//
//	short D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
//	return D;
//}
//
//string MonthInString(short Day) {
//	string Arr[] = { "Sun" , "Mon" , "Tue" , "Wed" , "Thur" , "Fri" ,"Sat" };
//	return Arr[Day];
//}
//
//short DayOfWeekOrder(stDate sDate) {
//	return DayOfWeekOrder(sDate.Year, sDate.Month, sDate.Day);
//}
//
//
//bool IsWeekEnd(stDate Date) {
//	short DayOrder = DayOfWeekOrder(Date);
//	return DayOrder == 5 || DayOrder == 6;
//}
//
//
//bool IsBusinessDay(stDate Date) {
//	return !(IsWeekEnd(Date));
//}
//
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//void CalculateVacationReturnDate(stDate& Date, short Days) {
//	short WeekendCounter = 0;
//
//	while (IsWeekEnd(Date))
//		Date = IncreaseDateByOne(Date);
//
//	for(short i = 1; i <= Days + WeekendCounter; i++) {
//		if (IsWeekEnd(Date))
//			WeekendCounter++;
//
//		Date = IncreaseDateByOne(Date);
//	}
//	while (IsWeekEnd(Date))
//
//		Date = IncreaseDateByOne(Date);
//}

////Problem Solving #56
// Is Date 1 After Date 2 ?
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}

//Problem Solving #57
//// Compare Dates 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}
//
//enum enCompareDates{Before = -1 , Equal = 0 , After = 1};
//
//enCompareDates CompareDates(stDate Date1, stDate Date2) {
//	if (IsDate1BeforeDate2(Date1, Date2))
//		return enCompareDates::Before;
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		return enCompareDates::Equal;
//
//	return enCompareDates::After;
//}
//
//Additional Function
//string CompareString(enCompareDates enCompare) {
//	switch (enCompare) {
//	case enCompareDates::After:
//		return "After";
//	case enCompareDates::Before:
//		return "Before";
//	case enCompareDates::Equal:
//		return "Equal";
//	}
//}
//

//Problem Solving #58
// Is two period overlap or not
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//struct stPeriod {
//	stDate StartDate;
//	stDate EndDate;
//};
//
//stPeriod ReadPeriod() {
//	stPeriod Period;
//	Period.StartDate = ReadData();
//	Period.EndDate = ReadData();
//	return Period;
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}
//
//enum enCompareDates { Before = -1, Equal = 0, After = 1 };
//
//enCompareDates CompareDates(stDate Date1, stDate Date2) {
//	if (IsDate1BeforeDate2(Date1, Date2))
//		return enCompareDates::Before;
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		return enCompareDates::Equal;
//
//	return enCompareDates::After;
//}
//
//bool isPeriodOverlap(stPeriod Period1, stPeriod Period2) {
//	if (CompareDates(Period2.EndDate, Period1.StartDate) == enCompareDates::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enCompareDates::After)
//		return false;
//
//	return true;
//}

//Problem Solving #59
// Period length in days
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//struct stPeriod {
//	stDate StartDate;
//	stDate EndDate;
//};
//
//stPeriod ReadPeriod() {
//	stPeriod Period;
//	Period.StartDate = ReadData();
//	Period.EndDate = ReadData();
//	return Period;
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}
//
//bool IsLeapYear(short Year) {
//
//	return Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0;
//}
//
//short DaysInMonth(short Year, short Month) {
//	if (Month < 1 || Month > 12)
//		return 0;
//	int ArrDays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return Month == 2 ? IsLeapYear(Year) ? 29 : 28 : ArrDays[Month - 1];
//}
//
//bool isLastDayInMonth(stDate Date) {
//	return Date.Day == DaysInMonth(Date.Year, Date.Month);
//}
//
//bool IsLastMonth(stDate Date) {
//	return Date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& Date) {
//	if (isLastDayInMonth(Date)) {
//		if (IsLastMonth(Date)) {
//			Date.Day = 1;
//			Date.Month = 1;
//			Date.Year++;
//		}
//		else {
//			Date.Day = 1;
//			Date.Month++;
//
//		}
//	}
//	else {
//		Date.Day++;
//	}
//	return Date;
//}
//
//enum enCompareDates { Before = -1, Equal = 0, After = 1 };
//
//enCompareDates CompareDates(stDate Date1, stDate Date2) {
//	if (IsDate1BeforeDate2(Date1, Date2))
//		return enCompareDates::Before;
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		return enCompareDates::Equal;
//
//	return enCompareDates::After;
//}
//
//short DiffereneBetweenDate(stDate Date1, stDate Date2,bool IncludingEndDay = false) {
//	short Diff = 0;
//
//	while (IsDate1BeforeDate2(Date1 , Date2)) {
//
//		Date1= IncreaseDateByOne(Date1);
//
//		Diff++;
//	}
//	return IncludingEndDay ? ++Diff : Diff;
//}
//
//short PeriodLengthInDays(stPeriod Period, bool IncludeEndDay = false) {
//	return DiffereneBetweenDate(Period.StartDate, Period.EndDate, IncludeEndDay);
//}

//Problem Solving #60
// Is Date In Period
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//struct stPeriod {
//	stDate StartDate;
//	stDate EndDate;
//};
//
//stPeriod ReadPeriod() {
//	stPeriod Period;
//	Period.StartDate = ReadData();
//	Period.EndDate = ReadData();
//	return Period;
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}
//
//enum enCompareDates { Before = -1, Equal = 0, After = 1 };
//
//enCompareDates CompareDates(stDate Date1, stDate Date2) {
//	if (IsDate1BeforeDate2(Date1, Date2))
//		return enCompareDates::Before;
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		return enCompareDates::Equal;
//
//	return enCompareDates::After;
//}
//
//bool isDateInPeriod(stDate Date, stPeriod Period) {
//	return  !(CompareDates(Date, Period.StartDate) == enCompareDates::Before || CompareDates(Date, Period.EndDate) == enCompareDates::After);
//
//}

//Problem Solving #61
// Count Period Overlap length
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//struct stPeriod {
//	stDate StartDate;
//	stDate EndDate;
//};
//
//stPeriod ReadPeriod() {
//	stPeriod Period;
//	Period.StartDate = ReadData();
//	Period.EndDate = ReadData();
//	return Period;
//}
//
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
//		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
//			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
//		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//
//}
//
//bool IsLeapYear(short year) {
//
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//
//short DaysInMonth(short year, short month) {
//	if (month < 1 || month > 12)
//		return 0;
//	int arrdays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return month == 2 ? IsLeapYear(year) ? 29 : 28 : arrdays[month - 1];
//}
//
//bool IslastDayInMonth(stDate date) {
//	return date.Day == DaysInMonth(date.Year, date.Month);
//}
//
//bool IsLastMonth(stDate date) {
//	return date.Month == 12;
//}
//
//
//stDate IncreaseDateByOne(stDate& date) {
//	if (IslastDayInMonth(date)) {
//		if (IsLastMonth(date)) {
//			date.Day = 1;
//			date.Month = 1;
//			date.Year++;
//		}
//		else {
//			date.Day = 1;
//			date.Month++;
//
//		}
//	}
//	else {
//		date.Day++;
//	}
//	return date;
//}
//
//
//short DifferenetBetweenDate(stDate date1, stDate date2,bool includingendday = false) {
//	short diff = 0;
//
//	while (IsDate1BeforeDate2(date1 , date2)) {
//
//		date1= IncreaseDateByOne(date1);
//
//		diff++;
//	}
//	return includingendday ? ++diff : diff;
//}
//
//short PeriodLengthInDays(stPeriod period, bool includeendday = false) {
//	return DifferenetBetweenDate(period.StartDate, period.EndDate, includeendday);
//}
//
//
//enum enCompareDates { Before = -1, Equal = 0, After = 1 };
//
//enCompareDates CompareDates(stDate Date1, stDate Date2) {
//	if (IsDate1BeforeDate2(Date1, Date2))
//		return enCompareDates::Before;
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		return enCompareDates::Equal;
//
//	return enCompareDates::After;
//}
//
//bool isDateInPeriod(stDate Date, stPeriod Period) {
//	return  !(CompareDates(Date, Period.StartDate) == enCompareDates::Before || CompareDates(Date, Period.EndDate) == enCompareDates::After);
//
//}
//bool isPeriodOverlap(stPeriod Period1, stPeriod Period2) {
//	if (CompareDates(Period2.EndDate, Period1.StartDate) == enCompareDates::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enCompareDates::After)
//		return false;
//
//	return true;
//}
//
//short TwoPeriodsCountOverlapDays(stPeriod Period1, stPeriod Period2) {
//	short Period1Length = PeriodLengthInDays(Period1, true);
//	short Period2Length = PeriodLengthInDays(Period2, true);
//
//	short DaysCounter = 0; 
//
//	if (!isPeriodOverlap(Period1, Period2))
//		return 0;
//
//	if (Period1Length < Period2Length) {
//
//		while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate)) {
//
//			if (isDateInPeriod(Period1.StartDate, Period2))
//				DaysCounter++;
//
//			Period1.StartDate = IncreaseDateByOne(Period1.StartDate);
//		}
//	}
//	else {
//		while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate)) {
//
//			if (isDateInPeriod(Period2.StartDate, Period1))
//				DaysCounter++;
//
//			Period2.StartDate = IncreaseDateByOne(Period2.StartDate);
//		}
//	}
//	return DaysCounter;
//}

//Problem Solving #62
// Validate date 
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//
//bool IsLeapYear(short year) {
//
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//
//short DaysInMonth(short year, short month) {
//	if (month < 1 || month > 12)
//		return 0;
//	int arrdays[12] = { 31 , 28 , 31 , 30 ,31 ,30 , 31, 31,30,31,30,31 };
//	return month == 2 ? IsLeapYear(year) ? 29 : 28 : arrdays[month - 1];
//}
//
//bool ValidateDate(stDate sDate) {
//	if (sDate.Month < 1 || sDate.Month > 12)
//		return false;
//	if (sDate.Day < 1 || sDate.Day > 31)
//		return false;
//
//	if(sDate.Month == 2){
//
//		if (IsLeapYear(sDate.Year)) {
//
//			if(sDate.Day > 29)
//				return false;
//		}
//		else {
//			if (sDate.Day > 28)
//				return false;
//		}
//
//	}
//	short DaysInMonthh = DaysInMonth(sDate.Year, sDate.Month);
//	if (sDate.Day != DaysInMonthh)
//		return false;
//
//	return true;
//}

//Problem Solving #63 To 64
// Read date string  then convert it to structure then convert it to string again
// 
//struct stDate {
//	short Year = 0;
//	short Month = 0;
//	short Day = 0;
//};
//
//short EnterYear() {
//	short  Year = 0;
//	cout << "Enter The Year? ";
//	cin >> Year;
//	return Year;
//}
//short EnterMonth() {
//	short  Month = 0;
//	cout << "Enter The Month? ";
//	cin >> Month;
//	return Month;
//}
//short EnterDay() {
//	short  Day = 0;
//	cout << "Enter The Day? ";
//	cin >> Day;
//	return Day;
//}
//
//
//stDate ReadData() {
//	stDate Date;
//	Date.Year = EnterYear();
//	Date.Month = EnterMonth();
//	Date.Day = EnterDay();
//	return Date;
//}
//vector<string> Split(string Line, string Del = "/") {
//	vector <string > Date;
//
//	short Pos = 0; 
//	string Word;
//
//	while ((Pos = Line.find(Del)) != std::string::npos) {
//		Word = Line.substr(0, Pos);
//
//		if (Word != " ") {
//			Date.push_back(Word);
//		}
//		Line = Line.erase(0, Pos + Del.length());
//	}
//	if (Line != " ")
//		Date.push_back(Line);
//
//	return Date;
//
//}
//
//stDate ConvertStringToStructure(string Line) {
//	vector <string> vDate = Split(Line);
//	stDate sDate;
//	sDate.Day = stoi(vDate[0]) ;
//	sDate.Month = stoi(vDate[1]);
//	sDate.Year = stoi(vDate[2]);
//	return sDate;
//}
//
//string ConvertStructureToString(stDate sDate) {
//	return to_string(sDate.Day) + "/" + to_string(sDate.Month) + "/" + to_string(sDate.Year);
//}

//Problem Solving #63 To 64
// Formating Date
// 
struct stDate {
	short Year = 0;
	short Month = 0;
	short Day = 0;
};

short EnterYear() {
	short  Year = 0;
	cout << "Enter The Year? ";
	cin >> Year;
	return Year;
}
short EnterMonth() {
	short  Month = 0;
	cout << "Enter The Month? ";
	cin >> Month;
	return Month;
}
short EnterDay() {
	short  Day = 0;
	cout << "Enter The Day? ";
	cin >> Day;
	return Day;
}


stDate ReadData() {
	stDate Date;
	Date.Year = EnterYear();
	Date.Month = EnterMonth();
	Date.Day = EnterDay();
	return Date;
}
vector<string> Split(string Line, string Del = "/") {
	vector <string > Date;

	short Pos = 0; 
	string Word;

	while ((Pos = Line.find(Del)) != std::string::npos) {
		Word = Line.substr(0, Pos);

		if (Word != " ") {
			Date.push_back(Word);
		}
		Line = Line.erase(0, Pos + Del.length());
	}
	if (Line != " ")
		Date.push_back(Line);

	return Date;

}

stDate ConvertStringToStructure(string Line) {
	vector <string> vDate = Split(Line);
	stDate sDate;
	sDate.Day = stoi(vDate[0]) ;
	sDate.Month = stoi(vDate[1]);
	sDate.Year = stoi(vDate[2]);
	return sDate;
}

string ConvertStructureToString(stDate sDate) {
	return to_string(sDate.Day) + "/" + to_string(sDate.Month) + "/" + to_string(sDate.Year);
}

string Replace(string S1, string Replace, string ReplaceTo) {
	short Pos = S1.find(Replace);

	while (Pos != std::string::npos) {
		S1.replace(Pos, Replace.length(), ReplaceTo);
		Pos = S1.find(Replace);
	}
	return S1;
}

string FormateDate(stDate sDate, string DateFormat = "dd/mm/yy") {
	string Format = "";
	Format = Replace(DateFormat, "dd", to_string(sDate.Day));
	Format = Replace(Format, "mm", to_string(sDate.Month));
	Format = Replace(Format, "yy", to_string(sDate.Year));
	return Format;
}



int main()
{
	string Date;
	cout << "Please Enter Date dd/mm/yy ";
	cin >> Date;

	stDate sDate = ConvertStringToStructure(Date);

	cout << FormateDate(sDate, "dd/mm/yy") << endl;
	cout << FormateDate(sDate, "yy/mm/dd") << endl;
	cout << FormateDate(sDate, "mm/dd/yy") << endl;
	cout << FormateDate(sDate, "dd-mm-yy") << endl;
	cout << FormateDate(sDate, "mm-dd-yy") << endl;
	cout << FormateDate(sDate, "Day:dd , Month:mm , Year:yy") << endl;


	system("pause > 0");

}

 