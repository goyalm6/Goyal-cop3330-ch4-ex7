/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */
 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    cout << "Please enter the first value: ";

    double var1;

    cin >> var1;



    cout << "Please enter the second value: ";

    double var2;

    cin >> var2;



    cout << "Please enter the operation required : ";

    char operation;

    cin >> operation;



    cout << endl;

    

    

    switch(operation)

    {

        case '+':                                                         

        cout << "The sum of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << (var1 + var2);

        break;



        case '-':

        cout << "The difference of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << (var1 - var2);

        break;

        

        case '*':

        cout << "The multiplication of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << (var1 * var2);

        break;

        

        case '/':

        cout << "The division of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << (var1 / var2);

        break;

        

        default:

        cout << "The reminder of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << fmod(var1,var2);

        break;

    }

}

