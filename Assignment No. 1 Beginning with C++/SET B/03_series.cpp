/*
3. Write a C++ program to calculate following series:
(1*1)+(2*2)+(3*3)+ … +(n*n)

*/

#include <iostream>
using namespace std;

int calSeries(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }

    return sum;
}

int main()
{
    int n, result;

    cout << "Enter the number for this series : (1*1)+(2*2)+(3*3)+ … +(n*n)" << endl;
    cin >> n;

    result = calSeries(n);

    cout << "The Series result is : " << result;
    return 0;
}
