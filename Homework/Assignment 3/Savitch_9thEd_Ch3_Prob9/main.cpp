/* 
 * File:   main.cpp
 * Author: James Cullen
 * Created on January 17, 2018, 11:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
int computerMove(int numPicksLeft, int humanNumber);

int main()
{
    int a, z=0, y=0;

    a = computerMove(z, y);
    cout << a;


    return 0;
}

int computerMove(int numPicksLeft, int humanNumber) {

    int number_left=23, n, cpu_turn;

    do{
        cout << "There are " << number_left << " toothpicks left. Pick 1, 2 or 3 toothpicks: ";
        cin >> n;


        if (n <= 3)
        {
            number_left -= n;
            if (number_left > 4)
            {
                cpu_turn = (4 - n); // þar sem n er fjöldi tannstöngla dregnir af notanda.
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                number_left -= cpu_turn;
            }
            else if (number_left == 2)
            {
                cpu_turn = 1;
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                number_left -= cpu_turn;
            }
            else if (number_left == 3)
            {
                cpu_turn = 2;
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                number_left -= cpu_turn;
            }
            else if (number_left == 4)
            {
                cpu_turn = 3;
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                number_left -= cpu_turn;
            }
            else if (number_left == 1)
            {
                cpu_turn = 1;
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                cout << "You won!" << endl;
                number_left -= cpu_turn;
            }
            else if (number_left == 0)
            {
                cpu_turn = 0;
                cout << "I pick " << cpu_turn << " toothpicks" << endl;
                cout << "I won!" << endl;
            }
        }
        else
            cout << "Invalid input. Try again." << endl;

    } while (number_left > 0);

    return 0;
}