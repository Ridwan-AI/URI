#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(1);

    ll T, R1, R2;
    cin >> T;
    for (ll counter = 1; counter <= T; counter++)
    {
        cin >> R1 >> R2;
        cout << R1 + R2 << endl;
    }
    return 0;
}