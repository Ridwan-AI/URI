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

    ll A, B, C, area;
    while (1)
    {
        cin >> A;
        if (A == 0)
            return 0;
        else
        {
            cin >> B >> C;
            cout << floor(pow((A * B) * 100 / C, 0.5)) << endl;
        }
    }
}