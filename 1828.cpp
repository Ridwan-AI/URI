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
    ll T;
    string first, second;
    cin >> T;
    for (ll counter = 1; counter <= T; counter++)
    {
        cin >> first >> second;
        cout << "Caso #" << counter << ": ";
        if (first == second)
        {
            cout << "De novo!";
        }
        else if (first == "pedra") //rock
        {
            if (second == "lagarto" || second == "tesoura")
                cout << "Bazinga!";
            else
            {
                cout << "Raj trapaceou!";
            }
        }
        else if (first == "papel") //paper
        {
            if (second == "pedra" || second == "Spock")
                cout << "Bazinga!";
            else
            {
                cout << "Raj trapaceou!";
            }
        }
        else if (first == "tesoura") //scissors
        {
            if (second == "papel" || second == "lagarto")
                cout << "Bazinga!";
            else
            {
                cout << "Raj trapaceou!";
            }
        }
        else if (first == "lagarto") //lizard
        {
            if (second == "Spock" || second == "papel")
                cout << "Bazinga!";
            else
            {
                cout << "Raj trapaceou!";
            }
        }
        else if (first == "Spock") //Spock
        {
            if (second == "pedra" || second == "tesoura")
                cout << "Bazinga!";
            else
            {
                cout << "Raj trapaceou!";
            }
        }
        else
        {
            cout << "Raj trapaceou!";
        }
        cout << endl;
    }
    return 0;
}