/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 10, 2018, 12:15 PM
 * Purpose:  Create A Program to calculate the taxes and profits associated with gasoline.
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
    double fedTax, stateTax, stateSales, oilProfit1, oilProfit2, gasPrice, totalTax, salesPerGallon, baseGas, gasTaxTotal, oilMargin1;
    //Initialize Variables
    fedTax=18.4;
    stateTax=41.7;
    stateSales=1.0225;
    oilProfit1=0.07;
    oilProfit2=6.5;
    //Process/Map inputs to outputs
    cout<<"Please press return after entering a number.\n";
    cout<<"Enter the price of one gallon of gasoline.\n";
    cin>>gasPrice;
    cout<<"\n";
    salesPerGallon=(stateSales*gasPrice)-gasPrice;
    totalTax=(salesPerGallon+stateTax+fedTax)/100;
    baseGas=gasPrice-totalTax;
    gasTaxTotal=(fedTax+stateTax)/gasPrice;
    oilMargin1=(oilProfit1/baseGas)*100;
    //Output data
    cout<<"The total tax on a gallon of gas is $";
    std::cout<< std::setprecision(4)<<totalTax;
    cout<<".\n";
    cout<<"The cost of one gallon of gas before taxes is $";
    cout<<baseGas;
    cout<<".\n";
    cout<<"The percentage of gasoline price due to gas tax is ";
    std::cout<< std::setprecision(3)<<gasTaxTotal;
    cout<<"%.\n";
    cout<<"The profit range for oil companies is from ";
    cout<<oilMargin1;
    cout<<"% to ";
    cout<<oilProfit2;
    cout<<"%.\n";
    cout<<"\n End of Program.";
    //Exit stage right!
    return 0;
}