/*
Finish the program to print the calendar month by month for a given year
Use input line to determine which year's calendar should be printed
*/

#include <stdio.h>

/* Function needed in this program*/
int dayNumber(int day, int month, int year);
void printCalendar(int year);
// Use switch statement for the following two functions
char* getMonthName(int monthNumber);
int numberOfDays(int monthNumber, int year);

/*
Function that returns the index of the day for date
DD/MM/YYYY
*/
int dayNumber(int day, int month, int year)
{

	static int t[] = { 0, 3, 2, 5, 0, 3,
					5, 1, 4, 6, 2, 4 };
	year -= month < 3;
	return (year + year / 4
			- year / 100
			+ year / 400
			+ t[month - 1] + day)
		% 7;
}

/*
Function that returns the name of the month for the given month Number
input: monthNumber as integer represent the given month,
output: characer of that month
ex: input: 1; output: "Janurary"
*/
char* getMonthName(int monthNumber);

/*
 Function to return the number of days for each month
 input: monthNumber as integer represent the given month, 
        year as integer represent the given year
 output: number of days in the given month in integer 
 Hint: Find out how to calculate the leap year, so that your feburary is correct
 ex: input: 2, 2016; output: 29
*/
int numberOfDays(int monthNumber, int year);

/*
 Function to print the calendar of the given year
 input: year as integer represent the given year
 output: void

 Sample output look: 10/2016
    ------------October-------------
    Sun Mon Tue Wed Thu Fri Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31
*/

void printCalendar(int year)
{
    /*
    Print the Calendar title
    Hint: decide the width of the string, so that the title is centralized
    */

	
    /*
    Start looping through the months and days
    Hint: 1. You need nested loop here
          2. For the first line of each month, 
          you need to find out how many spaces you need 
          to leave blank so that the dates are aligned
    */
   
   // Here is a pseudo code for the main logic

   /* 
   for i in monthes{
    Print the current month name
    Print the columns
    for k in space{
        print the space before date 1
    }
    for j in days{
        print the dates
        decide when to start a new line
    }
   }
   */
    

	return;
}


int main()
{
    /*
    Use scanf to read the input year and parse to the printCalendar
    Hint: Make sure the year is valid
    */
    int year;
	printCalendar(year);
	return 0;
}
