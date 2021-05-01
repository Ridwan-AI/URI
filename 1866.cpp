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
    ll testcases, S, N;
    cin >> testcases;
    for (size_t i = 0; i < testcases; i++)
    {
        cin >> N;
        if (N % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}