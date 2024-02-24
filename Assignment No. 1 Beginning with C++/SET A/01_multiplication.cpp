// 1. Write a C++ program to generate multiplication table.

#include <iostream>

using namespace std;

class Multiplication
{
public:
    void displayTable(int num)
    {
        cout << num << "'s Table" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << num << " x " << i << " = " << (num * i) << endl;
        }
    }
};

int main()
{
    Multiplication multi;
    multi.displayTable(5);
    multi.displayTable(9);
    return 0;
}