// 4. Write a C++ program to display Armstrong numbers between twointervals

#include <iostream>
#include <math.h>
using namespace std;

void printArmstrong(int num)
{
    int count = 0, copyNum = num, d, sum = 0;

    // count number's length
    while (copyNum)
    {
        copyNum = copyNum / 10;
        count++;
    }

    copyNum = num;

    while (num)
    {
        d = num % 10;
        sum += pow(d, count);
        num = num / 10;
    }

    if (copyNum == sum)
        cout << copyNum << endl;
}

int main()
{

    int low, high, result;

    cout << "Enter the lower limit : ";
    cin >> low;
    cout << "Enter the upper limit : ";
    cin >> high;

    cout << "Armstrong Numbers is " << endl;
    for (int i = low; i < high; i++)
    {
        printArmstrong(i);
    }

    return 0;
}
