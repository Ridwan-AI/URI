#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(0);
    ll total=0, x;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> x;
        total += (--x);
    }
    cout << ++total << "\n";

    return 0;
}