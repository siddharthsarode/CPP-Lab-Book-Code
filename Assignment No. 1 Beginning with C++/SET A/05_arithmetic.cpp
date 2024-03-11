/*
 5. Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from user and performs the corresponding arithmetic operation and display the result.(Use switchstatement)

*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result, choice;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

    cout << "Enter your choice" << endl
         << "1 for Addition" << endl
         << "2 for Subtraction" << endl
         << "3 for Multiplication" << endl
         << "4 for Division" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Addition is " << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "Subtraction is " << result;
        break;
    case 3:
        result = num1 * num2;
        cout << "Multiplication is " << result;
        break;
    case 4:
        result = num1 / num2;
        cout << "Division is " << result;
        break;
    default:
        cout << "* Wrong Input" << endl;
    }

    return 0;
}
