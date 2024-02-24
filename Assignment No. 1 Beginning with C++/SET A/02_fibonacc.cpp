// 1. Write a C++ program to generate multiplication table.

#include <iostream>

using namespace std;

class Fibonacci
{

public:
    void displayFibonacci(int n)
    {
        int num1 = 0, num2 = 1, num3;

        for (int i = 0; i < n; i++)
        {
            cout << num1 << " ";

            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
    }
};

int main()
{
    Fibonacci f;
    f.displayFibonacci(10);
    return 0;
}