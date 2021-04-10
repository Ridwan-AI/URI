#include <bits/stdc++.h>
#define ll unsigned long long int
#define deci double
using namespace std;

int fact(ll i)
{
    if (i <= 1)
        return 1;
    else
        return i * fact(i - 1);
}

int main()
{
    ll m, n;
    while (true)
    {
        cin >> m >> n;
        if (!cin.eof())
            cout << fact(m) + fact(n) << endl;
        else
            break;
    }
    return 0;
}