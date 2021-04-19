#include <bits/stdc++.h>
#define ll uint_fast64_t
#define llslow long long int
#define deci long double

using namespace std;

deci N, result;
deci phi;

void nthterm()
{
    phi = (sqrt(5) + 1) / 2;
    result = (pow(phi, N) - pow(-phi, -N)) / (sqrt(5));
    if (N == 1) result = 1;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases;
    cin >> testcases;
    for (ll counter = 1; counter <= testcases; counter++)
    {
        cin >> N;
        nthterm();
        cout << "Fib(" << N << ") = " << ll(result) << endl;
    }

    return 0;
}