#include <iostream>

using namespace std;

class PrimeNumber
{
public:
    int isPrime(int num)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
                return 0;
        }
        return 1;
    }
};

int main()
{
    PrimeNumber p;
    int num, res;

    cout << "Enter the number" << endl;
    cin >> num;

    res = p.isPrime(num);
    if (res)
        cout << num << " is Prime number" << endl;
    else
        cout << num << " is not Prime number" << endl;

    return 0;
}