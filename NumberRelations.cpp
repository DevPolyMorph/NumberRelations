//  Author: Gabriel Carpio
// The purpose of this program is to demostrate basic C++ syntax
// with number relations. 

#include <iostream>

using namespace std;

int main()
{

    int firstNum;
    int secondNum;
    int sumEven = 0;
    int sumOdd = 0;

    cout << "This program is written by Elisha Aldana and Gabriel Carpio-Pena" << endl <<endl;
    cout << "The function of this program is, given 2 positive numbers, the program will display the following" << endl << endl;
    cout << "\t 1. All even number between firstNum and secondNum." << endl;
    cout << "\t 2. All odd numbers between firstNum and secondNum." << endl
         << "\t 3. The sum of all even numbers between firstNum and secondNum." << endl
         << "\t 4. The sum of all odd numbers between firstNum ans secondNum." << endl
         << "\t 5. All prime numbers between firstNum and secondNum." << endl
         << "\t 6. The numbers and their squares between firstNum and secondNum." << endl << endl;
    cout << "Enter the first number : ";
    cin >> firstNum;
    cout << "Enter the second number : ";
    cin >> secondNum;
    cout << endl;
    if ( firstNum >= secondNum )
    {
        cout << "Error: First number must be < Second Number." << endl;
    }
    if ( firstNum < 0 || secondNum < 0)
    {
        cout << "Error - Invalid number: Numbers must be positive." << endl;
    }
    cout << "You entered : " << firstNum << " and " << secondNum << endl << endl;
    cout << "\t 1. All even numbers : ";
    for (int x = firstNum+1 ; x < secondNum; x++)
    {
        if (x%2==0)
        {
            cout << x << ",";
            sumEven+=x;
        }
    }
    cout << endl;
    cout << "\t 2. All odd numbers : ";
    for (int x = firstNum+1 ; x < secondNum; x++)
    {
        if (x%2==1)
        {
            cout << x << ",";
            sumOdd+=x;
        }
    }
    cout << endl;
    cout << "\t 3. Sum Of All Even Numbers: " << sumEven;
    cout << endl;
    cout << "\t 4. Sum of All Odd Numbers: " << sumOdd;
    cout << endl;
    cout << "\t 5. All prime numbers : ";
    for (int x = firstNum+1 ; x < secondNum; x++)
    {
        if(x==2||x==3 || x==5 || x==7 )
            cout << x << ",";
        if((x%2!=0) && (x%3!=0) && (x%5!=0) && (x%7!=0))
            cout<< x << ",";
    }
    cout << endl;
    cout << "\t 6. Number  Square" << endl;
        for (int x = firstNum+1 ; x < secondNum; x++)
            cout << "\t\t" << x << "\t" << x*x << endl;
}
