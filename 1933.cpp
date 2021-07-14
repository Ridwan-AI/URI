#include <bits/stdc++.h>
#include <iterator>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    cout << fixed << setprecision(0);
    ll A, B;
    cin >> A >> B;
    if (A == B)
    {
        cout << A << endl;
    }
    else
    {
        if (A > B)
            cout << A << endl;
        else
            cout << B << endl;
    }
    return 0;
}