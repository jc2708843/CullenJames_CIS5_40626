/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 6, 2018, 11:45 AM
 * Purpose:  Create a program that calculates the total number of peas
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
    int number_of_pods, peas_per_pod, total_peas;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Hello\n";
    cout<<"Press return after netering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas per pod.\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Good-bye\n";
    //Exit stage right!
    return 0;
}