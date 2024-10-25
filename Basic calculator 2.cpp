// Basic calculator 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

//This is my basic calculator application in c++
int main()
{

    //declaration of variables
    int num1 = 0;
    int num2 = 0;
    int value = 0;
    string name = "";
    char choice = ' ';
    bool cond = false;

    //allow user to enter values
    //introduction to do-while loop
    do
    {
        cout << "Menu : \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Choose an action to perfom the basic calculator : ";
        cin >> value;
        cout << "Enter the first integer : ";
        cin >> num1;
        //render new line
        cout << endl;
        cout << "Enter the second integer : ";
        cin >> num2;

        //check if num1 & num2 are greater than zero
        // introduction to if statement
        if (num1 > 0 && num2 > 0)
        {


            //set to digits
            cout << setprecision(2) << fixed << endl;
            //introduction to switch statement
            switch (value)
            {
            case 1:
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4:
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            default:
                //display
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            }
        }
        //ask user if they want to perfom another calculation
        cout << "Would you like to perfom another calculation ? \n";
        cin >> choice;
        if (toupper(choice) == 'Y')
        {
            cond = true;
        }
        else
        {
            cond = false;
        }
    } while (cond);

    _getch();
    return 0;
}

