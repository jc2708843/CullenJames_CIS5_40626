/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 17, 2018, 1:23 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int isPrimeNumber(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
   bool isPrime;
   int count;
   cout<<"Enter the value of n:";
   cin>>count;
   for(int n = 2; n < count; n++)
   {
       // isPrime will be true for prime numbers
       isPrime = isPrimeNumber(n);

       if(isPrime == true)
          cout<<n<<" ";
   }
   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0)
      {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
    //Output data
    
    //Exit stage right!