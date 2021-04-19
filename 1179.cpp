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

    vector<ll> even;
    vector<ll> odd;
    ll temp;
    for (ll c = 0; c < 15; c++)
    {
        cin >> temp;
        if ((temp % 2) == 0)
        {
            even.push_back(temp);
        }
        else
        {
            odd.push_back(temp);
        }
        if (even.size() == 5)
        {
            for (ll counter = 0; counter < 5; counter++)
            {
                cout << "par[" << counter << "] = " << even[counter] << endl;
            }
            even.clear();
        }
        if (odd.size() == 5)
        {
            for (ll counter = 0; counter < 5; counter++)
            {
                cout << "impar[" << counter << "] = " << odd[counter] << endl;
            }
            odd.clear();
        }
    }
    if (odd.empty() != true)
    {
        for (ll counter = 0; counter < odd.size(); counter++)
        {
            cout << "impar[" << counter << "] = " << odd[counter] << endl;
        }
    }
    if (even.empty() != true)
    {
        for (ll counter = 0; counter < even.size(); counter++)
        {
            cout << "par[" << counter << "] = " << even[counter] << endl;
        }
    }
    return 0;
}