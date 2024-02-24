// 5. Write a C++ program to find largest and smallest number of 3 integer numbers. (Use
// cascading of I/Ooperators.)

#include <iostream>

using namespace std;

class MaxSmallNumber
{
private:
    int a, b, c;

public:
    void getDetail()
    {
        cout << "Enter the value of a b c variables" << endl;
        cin >> a >> b >> c;
    }

    int maxNo()
    {
        if ((a > b) && (a > c))
            return a;
        else if ((b > a) && (b > c))
            return b;
        else
            return c;
    }

    int smallNo()
    {
        if ((a < b) && (a < c))
            return a;
        else if ((b < a) && (b < c))
            return b;
        else
            return c;
    }
};

int main()
{
    MaxSmallNumber num;

    num.getDetail();

    cout << "Max Number is = " << num.maxNo() << endl;
    cout << "Small Number is = " << num.smallNo();

    return 0;
}
