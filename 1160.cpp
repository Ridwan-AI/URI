#include <iostream>
#include <stdio.h>
#define ll long long int
#define deci double
using namespace std;
#include <cmath>

int main()
{
    ll testcases, pa, pb, time = 0;
    deci g1, g2;
    cin >> testcases;
    for (int counter = 1; counter <= testcases; counter++)
    {
        cin >> pa >> pb >> g1 >> g2;
        while (pa <= pb)
        {
            pa = floor(pa + (pa * (g1 / 100)));
            pb = floor(pb + (pb * (g2 / 100)));
            time++;
            if (time > 100)
            {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }
        if (pa > pb && time <= 100)
        {
            cout << time << " anos." << endl;
        }
        time = 0;
    }
    return 0;
}