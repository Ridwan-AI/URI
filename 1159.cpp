#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main()
{
    ll X, total = 0, Z = 0;
    while (true)
    {
        cin >> X;
        if (X == 0)
            break;
        else if ((X % 2) == 0)
            Z = 2;
        else
            Z = 0;
        for (int counter = X; counter <= (X + 10 - Z); counter++)
        {
            if ((counter % 2) == 0)
            {
                total += counter;
            }
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}
