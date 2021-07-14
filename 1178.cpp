#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

deci N[100];

void fill ()
{
    for (ll count=1; count <= 99; count++)
    {
        N[count] = (N[count-1]) / 2;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(4);

    deci X;
    cin >> X;
    N[0] = X;
    fill();
    for (ll counter = 0; counter < 100; counter++)
        cout << "N[" << counter << "] = " << N[counter] << endl;
    return 0;
}