//Jacob Walrath
//10/16/2024
//Chapter 4 Programming Project
//Days_in_A_Month

#include <iostream>

using namespace std;

int main()
{
    int days, leap_year = 0; 
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
        leap_year = 1;
    // Tests if the year is divisible by certain numbers so it can be calculated if it is a leap year or not (specifically for February).
        
    if (month == 2)
    {
        if (leap_year == 1)
        {
            days = 29;
            cout << days << " days";
        }
        else
        {
            days = 28;
            cout << days << " days";
        }
    }

    else if ((month % 2 != 0) && (month <= 12))
    {
        days = 30;
        cout << days << " days";
    }

    else if ((month % 2 == 0) && (month <= 12) && (month != 2))
    {
        days = 31;
        cout << days << " days";
    }

    else
        cout << "You didn't enter a valid number for the month.";

    return 0;
}
