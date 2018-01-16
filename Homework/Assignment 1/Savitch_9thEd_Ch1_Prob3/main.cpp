/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 6, 2018, 12:37 PM
 * Purpose:  Create a Change counting program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int pennies, nickels, dimes, quarters, total_pennies, total_nickels, total_dimes, total_quarters, total_value;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This Program will tell the value of the coins in cents.\n";
    cout<<"Please press enter or return after each value.\n";
    cout<<"Enter the number of pennies.\n";
    cin>>pennies;
    total_pennies = pennies * 1;
    cout<<"Enter the number of nickels.\n";
    cin>>nickels;
    total_nickels = nickels * 5;
    cout<<"Enter the number of dimes.\n";
    cin>>dimes;
    total_dimes = dimes * 10;
    cout<<"Enter the number of quarters.\n";
    cin>>quarters;
    total_quarters = quarters * 25;
    total_value = total_pennies + total_nickels + total_dimes + total_quarters;
    //Output data
    cout<<"If you have ";
    cout<<pennies;
    cout<<" pennies, ";
    cout<<nickels;
    cout<<" nickels, ";
    cout<<dimes;
    cout<<"dimes, and ";
    cout<<quarters;
    cout<<"quarters,\n";
    cout<<"then you have ";
    cout<<total_value;
    cout<<" cents.\n";
    cout<<"\n";
    cout<<"End of Program\n";
    //Exit stage right!
    return 0;
}