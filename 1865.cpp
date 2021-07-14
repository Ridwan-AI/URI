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
    ll testcases, force;
    string name;
    cin >> testcases;
    for (size_t i = 0; i < testcases; i++)
    {
        cin >> name;
        cin >> force;
        if (name == "Thor")
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}