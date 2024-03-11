/*
2. Write a C++ program to print the followingpattern
      *
    * *
  * * *
* * * *

*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    int i, sp;

    for (i = 1; i <= n; i++)
    {
        sp = n - i;
        for (int k = 1; k <= sp; k++)
            cout << " ";

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printPattern(n);
    return 0;
}
