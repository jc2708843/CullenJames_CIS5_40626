/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 17, 2018, 3:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    double bforce, volume, specweight, radius, weight;
    //Initialize Variables
    specweight=62.4;
    //Process/Map inputs to outputs
    cout<<"Please enter the weight in pounds and radius in feet of a sphere.\n"
            <<"Press enter after each value.\n";
    cout<<"Enter the weight of the sphere.\n";
    cin>>weight;
    cout<<"Enter the radius of the sphere.\n";
    cin>>radius;
    volume=(4/3)*3.1415*radius*radius*radius;
    bforce=volume*specweight;
    if (bforce > weight)
        cout<<"The sphere will float.\n";
    else if (bforce < weight)
        cout<<"The sphere will sink.\n";
    //Output data
    
    //Exit stage right!
    return 0;
}