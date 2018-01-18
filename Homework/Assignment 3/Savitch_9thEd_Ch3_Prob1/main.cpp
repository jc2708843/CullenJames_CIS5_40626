/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 17, 2018, 10:20 AM
 * Purpose:  Rock Paper Scissors
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
    string player_one, player_two;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"Welcome to a game of rock-paper-scissors.\n";
    cout<<"Player 1, please enter your either R for rock,\n"
        <<"P for paper, or S for scissors, then press return.\n";
    cin>>player_one;
    cout<<"Player 2, please enter your either R for rock,\n"
        <<"P for paper, or S for scissors, then press return.\n";
    cin>>player_two;
    cout<<endl;
        if ((player_one=="r") || (player_one=="R"))
            player_one=="rock";
        else if ((player_one=="p") || (player_one=="P"))
            player_one == "paper";
        else if ((player_one=="s") || (player_one=="S"))
            player_one == "scissors";
       
        if ((player_two=="r") || (player_two=="R"))
            player_two == "rock";
        else if ((player_two=="p") || (player_two=="P"))
            player_two == "paper";
        else if ((player_two=="s") || (player_two=="S"))
            player_two == "scissors";
    //Output data
    if ((player_one=="rock") && (player_two=="paper"))
        cout<<"Paper beats rock, Player 2 wins!\n";
    else if ((player_one=="rock") && (player_two=="scissors"))
        cout<<"Rock beats scissors, Player 1 wins!\n";
    else if ((player_one=="rock") && (player_two=="rock"))
        cout<<"Tie!\n";
    else if ((player_one=="paper") && (player_two=="rock"))
        cout<<"Paper beats rock, Player 1 wins!\n";
    else if ((player_one=="paper") && (player_two=="scissors"))
        cout<<"Scissors beats paper, Player 2 wins!\n";
    else if ((player_one=="paper") && (player_two=="paper"))
        cout<<"Tie!\n";
    else if ((player_one=="scissors") && (player_two=="rock"))
        cout<<"Rock beats scissors, PLayer 2 wins!\n";
    else if ((player_one=="scissors") && (player_two=="paper"))
        cout<<"Scissors beats paper, Player 1 wins!\n";
    else if((player_one=="scissors") && (player_two=="scissors"))
        cout<<"Tie!\n";
    cout<<"End of program.\n";
    //Exit stage right!
    return 0;
}