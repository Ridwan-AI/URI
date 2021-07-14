#include <bits/stdc++.h>
#define ll unsigned long long int
#define deci double
using namespace std;

void perfectnumber(ll n)
{
    ll total = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            total += i;
    if (total == n)
        cout << n << " eh perfeito";
    else
        cout << n << " nao eh perfeito";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases, X;
    cin >> testcases;
    for (int counter = 1; counter <= testcases; counter++)
    {
        cin >> X;
        perfectnumber(X);
        cout << "\n";
    }
    return 0;
}