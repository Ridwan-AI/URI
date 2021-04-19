#include <bits/stdc++.h>
#define ll uint_fast64_t
#define llslow long long int
#define deci long double

using namespace std;

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll testcases;
    deci N, result, phi;
    // cout.precision(50);
    cin >> testcases;
    for (ll counter = 1; counter <= testcases; counter++)
    {
        cin >> N;
        phi = (sqrt(5) + 1) / 2;
        
        cout << "Fib(" << N << ") = ";
        cout << (pow((sqrt(5) + 1) / 2, N) - (-1)*pow((sqrt(5) + 1) / 2, (-1)*N)) / (sqrt(5));
    }

    return 0;
}