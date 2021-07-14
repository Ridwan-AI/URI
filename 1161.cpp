#include <bits/stdc++.h>
#define ll unsigned long long int
#define deci double
using namespace std;

ll fact(ll i)
{

    if (i <= 1)
        return 1;
    ll total = i;
    for (ll counter = i - 1; counter > 1; counter--)
        total *= counter;
    return total;
}

int main()
{
    ll m, n;
    while (true)
    {
        cin >> m >> n;
        if (!cin.eof())
        {
            cout << fact(m) + fact(n) << endl;
        }
        else
            break;
    }
    return 0;
}