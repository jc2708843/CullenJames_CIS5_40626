/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 6, 2018, 11:30 AM
 * Purpose:  Create a Program that calculates the total peas per pod.
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
    int var_one, var_two, var_sum, var_product;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the first number:\n";
    cin>>var_one;
    cout<<"Enter the second number:\n";
    cin>>var_two;
    var_sum = var_one + var_two;
    var_product = var_one * var_two;
    cout<<"If you have ";
    cout<<var_one;
    cout<<" and ";
    cout<<var_two;
    cout<<" then\n";
    cout<<"the sum is ";
    cout<<var_sum;
    cout<<" and the product is ";
    cout<<var_product;
    cout<<".\n";
    cout<<"End of Program.\n";
    
    //Exit stage right!
    return 0;
}