/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 1, 2018, 10:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */
#include <iostream>
using namespace std;

int main()
{

char ans;

do {
int oldCrud = 0; // at least 5 days old; will reproduce next cycle
int newCrud; // less than 5 days old; won't reproduce next cycle
int next;
int daysToSimulate;
int day; // current day


cout << "Enter starting amount of green crud (integer): ";
cin >> newCrud;

cout << "Enter number of days to simulate (integer): ";
cin >> daysToSimulate;




for (day = 0; daysToSimulate > day; day++)
{
if (day % 5 == 0)

next = newCrud + oldCrud;
newCrud = oldCrud;
oldCrud = next;

}


if (daysToSimulate < 5)
cout << "\nIt takes at least five days for the green crud to have any growth. Hence, it is still " 
<< newCrud << " pounds.";

else 
cout << "On day " << daysToSimulate << " you have " << oldCrud 
<< " pounds of green crud." << endl;








cout << "\nWould you like to run the program again? (y or n): ";
cin >> ans;

} while (ans == 'Y' || ans == 'y');

return 0;

}