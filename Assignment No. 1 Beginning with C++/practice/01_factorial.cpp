
// 1. Write a C++ program to find factorial of a given number.

#include <iostream>

using namespace std;

class Operation
{
public:
    int factorial(int num)
    {
        int fact = 1;
        while (num)
        {
            fact = num * fact;
            num--;
        }

        return fact;
    }
};

int main()
{
    int num, result;
    Operation fact;
    cout << "Enter the number" << endl;
    cin >> num;

    result = fact.factorial(num);
    cout << "Factorial is " << result << endl;
    return 0;
}