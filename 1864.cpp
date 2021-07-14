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
    string a = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    ll len;
    cin >> len;
    cout << a.substr(0, len) << endl;
    return 0;
}