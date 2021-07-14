#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{

    deci T, N;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        cin >> N;
        N = pow(N, 0.5);
        cout << round(N)<<endl;
    }

    return 0;
}