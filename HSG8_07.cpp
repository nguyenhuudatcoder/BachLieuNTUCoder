/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n;
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
    cin >> n;
    cout << fixed << setprecision(2);
    if (n <= 5)
    {
        ll s = n * 6500;
        cout << 1.0 * s<<"\n";
        cout << 1.0 * s * 12 / 100<<"\n";
        cout << 1.0 * s * 12 / 100 + s;
    }
    else if (n <= 15)
    {
        ll s = 5 * 6500 + (n - 5) * 7800;
        cout << 1.0 * s<<"\n";
        cout << 1.0 * s * 12 / 100<<"\n";
        cout << 1.0 * s * 12 / 100 + s;
    }
    else if (n <= 25)
    {
        ll s = 5 * 6500 + 10 * 7800 + (n - 15) * 9200;
        cout << 1.0 * s<<"\n";
        cout << 1.0 * s * 12 / 100<<"\n";
        cout << 1.0 * s * 12 / 100 + s;
    }
    else
    {
        ll s = 5 * 6500 + 10 * 7800 + 10 * 9200 + (n - 25) * 10300;
        cout << 1.0 * s<<"\n";
        cout << 1.0 * s * 12 / 100<<"\n";
        cout << 1.0 * s * 12 / 100 + s;
    }
}