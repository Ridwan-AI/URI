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
    ll asd;
    cin >> asd;
    string hexa = "";
    string bin = "";
    while (asd > 0)
    {
        //EVen
        if (asd % 2 == 0)
        {
            asd /= 2;
            bin = '0' + bin;
        }
        else
        {
            asd--;
            asd /= 2;
            bin = '1' + bin;
        }
    }

    ll left = bin.length() % 4;
    if (left != 0)
        left = (4 - left);
    for (ll i = 0; i < left; i++)
    {
        bin = '0' + bin;
    }
    cout << bin << endl;
    for (ll count = 0; count < (bin.length() / 4); count++)
    {
        if (bin.substr(count * 4, count * 4 + 4) == "0000")
            hexa.push_back('0');
        if (bin.substr(count * 4, count * 4 + 4) == "0001")
            hexa.push_back('1');
        if (bin.substr(count * 4, count * 4 + 4) == "0010")
            hexa.push_back('2');
        if (bin.substr(count * 4, count * 4 + 4) == "0011")
            hexa.push_back('3');
        if (bin.substr(count * 4, count * 4 + 4) == "0100")
            hexa.push_back('4');
        if (bin.substr(count * 4, count * 4 + 4) == "0101")
            hexa.push_back('5');
        if (bin.substr(count * 4, count * 4 + 4) == "0110")
            hexa.push_back('6');
        if (bin.substr(count * 4, count * 4 + 4) == "0111")
            hexa.push_back('7');
        if (bin.substr(count * 4, count * 4 + 4) == "1000")
            hexa.push_back('8');
        if (bin.substr(count * 4, count * 4 + 4) == "1001")
            hexa.push_back('9');
        if (bin.substr(count * 4, count * 4 + 4) == "1010")
            hexa.push_back('A');
        if (bin.substr(count * 4, count * 4 + 4) == "1011")
            hexa.push_back('B');
        if (bin.substr(count * 4, count * 4 + 4) == "1100")
            hexa.push_back('C');
        if (bin.substr(count * 4, count * 4 + 4) == "1101")
            hexa.push_back('D');
        if (bin.substr(count * 4, count * 4 + 4) == "1110")
            hexa.push_back('E');
        if (bin.substr(count * 4, count * 4 + 4) == "1111")
            hexa.push_back('F');
        // cout << (count * 4) + 4 << endl;
        cout << bin.substr(0, 3) << endl;
    }
    cout << hexa << endl;
    return 0;
}