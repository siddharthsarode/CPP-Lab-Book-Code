// 3. Write a C++ program to reverse a number.

#include <iostream>
using namespace std;

int numReverse(int num)
{
    int d, rev = 0;
    while (num)
    {
        d = num % 10;
        rev = (rev * 10) + d;
        num = num / 10;
    }

    return rev;
}

int main()
{
    int num, res;

    cout << "Enter the number for reverse" << endl;
    cin >> num;

    res = numReverse(num);

    cout << "Before Reverse = " << num << endl;
    cout << "After Reverse = " << res << endl;

    return 0;
}
