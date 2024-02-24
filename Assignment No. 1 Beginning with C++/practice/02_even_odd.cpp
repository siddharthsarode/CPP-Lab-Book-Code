
// 2. Write a C++ program to check whether a given number is even or odd.

#include <iostream>

using namespace std;

class OddEven
{
public:
    int isEven(int num)
    {
        if (num % 2 == 0)
            return 1;

        return 0;
    }
};

int main()
{
    int num, result;
    OddEven obj;
    cout << "Enter the number" << endl;
    cin >> num;

    result = obj.isEven(num);

    if (result)
        cout << num << " is even " << endl;
    else
        cout << num << " is Odd " << endl;

    return 0;
}