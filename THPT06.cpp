/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n;
void get(ll n)
{
    if (n < 10)
    {
        cout << n<<"\n";
        return;
    }
    ll numbers = 9, digit = 1;
    while (n - numbers * digit >= 0)
    {
        n -= numbers * digit;
        digit++;
        numbers *= 10;
    }
    numbers = numbers / 9 - 1;
    ll Number = numbers + (n + digit - 1) / digit;
    n %= digit;
    if (n == 0)
        n = digit;
    ll m = pow(10, digit - n);
    Number /= m;
    cout << Number % 10 << "\n";
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> n)
        get(n);
}