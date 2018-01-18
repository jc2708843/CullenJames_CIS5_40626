/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 17, 2018, 3:35 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double PRINCIPAL,INTEREST_RATE, COMPOUND_AMOUNT;


    cout << "What is your savings account balance?: " << endl;
    cin >> PRINCIPAL;
    cout << "What is your annual interest rate?: " << endl;
    cin >> INTEREST_RATE;
    cout << "How many times has your interest been compounded?: " << endl;
    cin >> COMPOUND_AMOUNT;

    double amt1 = 1 + (INTEREST_RATE/COMPOUND_AMOUNT);
    double AMOUNT = PRINCIPAL * pow(amt1, COMPOUND_AMOUNT);

    cout << "Interest Rate: " << INTEREST_RATE << endl;
    cout << "Times Compounded: " << COMPOUND_AMOUNT << endl;
    cout << "Principal: " << PRINCIPAL << endl;
    cout << "Interest: " << INTEREST_RATE * COMPOUND_AMOUNT << endl;
    cout << "Amount: " << AMOUNT << endl;

    system("pause");
    return 0;
    //Exit stage right!
    return 0;
}