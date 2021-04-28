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
    ll N;
    while (1)
    {
        cin >> N;
        if (cin.eof())
            return 0;
        if (N == 0)
            cout << "vai ter copa!\n";
        else
            cout << "vai ter duas!\n";
    }
}