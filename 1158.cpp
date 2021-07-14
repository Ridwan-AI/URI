#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main()
{
    ll N, X, Y, total = 0, Z = 0;
    cin >> N;
    for (ll counter = 1; counter <= N; counter++)
    {
        cin >> X >> Y;
        if ((X % 2) == 0)
        {
            X++;
            Z = 2;
        }
        else
        {
            Z = 2;
        }
        for (ll between = X; between <= (X + (2 * Y) - Z); between++)
        {
            if ((between % 2) != 0)
            {
                total += between;
                // cout << between << " ";
            }
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}