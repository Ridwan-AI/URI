#include <bits/stdc++.h>
#define ll long long int
#define deci long double

using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout << setprecision(1);
    deci input[100];
    for (ll counter = 0; counter <= 99; counter++)
    {
        cin >> input[counter];
        if (input[counter] <= 10)
        {
            cout << "A[" << counter << "] = " << input[counter] << endl;
        }
    }
    return 0;
}