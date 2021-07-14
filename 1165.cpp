#include <bits/stdc++.h>
#define ll unsigned long long int
#define deci double

using namespace std;

void prime(ll num)
{
    for (ll c = 2; c < num; c++)
    {
        if ((num % c) == 0)
        {
            cout << num << " nao eh primo";
            return;
        }
    }
    cout << num << " eh primo";
    return;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases, X;
    cin >> testcases;
    for (int c = 1; c <= testcases; c++)
    {
        cin >> X;
        prime(X);
        cout << "\n";
    }
    return 0;
}
