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

    ll N;
    cin >> N;
    ll X[N];

    for (ll count = 0; count < N; count++)
    {
        cin >> X[count];
    }
    ll small = 99999999;
    ll position=0;
    for (ll count = 0; count < N; count++)
    {
        if (X[count] < small)
        {
            small = X[count];
            position = count;
        }
    }
    cout << "Menor valor: " << small << endl;
    cout << "Posicao: " << position << endl;
    return 0;
}