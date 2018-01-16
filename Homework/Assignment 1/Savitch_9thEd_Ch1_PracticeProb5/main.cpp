/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 6, 2018, 11:49 AM
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
    int height, width, total_length;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the the height of the desired area in feet:\n";
    cin>>height;
    cout<<"Enter the width of the desired area in feet.\n";
    cin>>width;
    total_length = (height + width)*2;
    cout<<"If you have ";
    cout<<height;
    cout<<" feet high\n";
    cout<<"by ";
    cout<<width;
    cout<<" feet wide, then\n";
    cout<<"you need ";
    cout<<total_length;
    cout<<" feet of fencing.\n";
    
    //Exit stage right!
    return 0;
}