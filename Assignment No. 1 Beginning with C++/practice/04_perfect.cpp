// 4. Write a C++ program to check whether a given number is perfect ornot.

#include <iostream>

using namespace std;

class PerfectNumber
{
public:
    int isPerfectNo(int num)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum = sum + i;
        }

        if (sum == num)
            return 1;

        return 0;
    }
};

int main()
{
    PerfectNumber p;
    int num, result;

    cout << "Enter the number" << endl;
    cin >> num;

    result = p.isPerfectNo(num);
    if (result == 1)
        cout << num << " is Perfect number." << endl;
    else
        cout << num << " is not Perfect number." << endl;

    return 0;
}