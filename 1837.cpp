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
    ll a, b, r, q = 0, x = 0, y = 0;
    cin >> a >> b;

    if (a > 0)
    {
        r = a % b;
        q = a / b;
    }
    else
    {
        x = b;
        if (b < 0)
            x = b * -1;
        for (r = 0; r < x; r++)
        {
            y = a - r;
            if (y % b == 0)
                break;
        }
        q = y / b;
    }

    cout << q << " " << r << endl;
    return 0;
}