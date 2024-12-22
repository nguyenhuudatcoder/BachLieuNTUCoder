/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
unsigned ll a, b, c;
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
    cin >> a >> b >> c;
    if (a + b >c && a + c > b && b + c > a)
    {
        if (c < a)
            swap(a, c);
        if (c < b)
            swap(b, c);
        if (a * a + b * b == c * c)
            cout << "VUONG";
        else if (a * a + b * b < c * c)
            cout << "TU";
        else if (a * a + b * b > c * c)
            cout << "NHON";
    }
    else
    {
        cout << "NO";
    }
}