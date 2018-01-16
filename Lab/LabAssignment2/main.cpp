/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 10, 2018, 10:12 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double milBudget, fedBudget, milPercent;
    //Initialize Variables
    milBudget=639.1e09f;  //639.1 Billion
    fedBudget=4.094e12f;  //4.094 Trillion
    //Process/Map inputs to outputs
    milPercent=(milBudget/fedBudget)*100;
    //Output data
    cout<<"If the Federal budget for 2018 is 4.094 Trillion USD, \n"
            <<"and the military budget for 2018 is 639.1 Billion USD, \n"
            <<"then the federal government is spending "<<milPercent<<"% of it's\n"
            <<"budget on the military.";
    //Exit stage right!
    return 0;
}