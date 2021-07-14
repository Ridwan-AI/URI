#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main()
{
    int testcases, x=0, y=0, temp=0, total=0;
    cin >> testcases;
    for (ll counter = 1; counter <= testcases; counter++)
    {
        cin >> x >> y;
        if (x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        x++;
        y--;
        // cout << x << " " << y;
        for (ll count = x; count <= y; count++)
        {
            if ((count % 2) != 0)
            total += count;
        }
        cout << total << endl;
        total = 0;
    }
}
