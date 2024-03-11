/*
2. Write a C++ program to calculate following series:
1/1! + 2/2! + 3/3! + …. +n/n!
*/

#include <iostream>
using namespace std;

void display(int n)
{
    cout << "Series is = ";
    for (int i = 1; i <= n; i++)
        cout
            << i << "/" << i << "! +";

    cout << endl;
}

int fact(int n)
{
    int f = 1;
    for (int i = 1; i < n; i++)
        f = f * i;

    return f;
}

int calSeries(int n)
{
    int sum = 0;

    display(n);

    for (int i = 1; i <= n; i++)
        sum = sum + fact((i / i));

    return sum;
}

int main()
{
    int n, result;

    cout << "Enter the value : ";
    cin >> n;

    result = calSeries(n);
    cout
        << "Total of series is = " << result;

    return 0;
}
