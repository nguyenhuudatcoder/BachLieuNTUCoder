/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, s, dem;
pair<ll, ll> a[1000005];
bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
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
    cin >> n >> s;
    for (ll i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n, compare);
    for (ll i = 0; i < n; i++)
    {
        if (s <= a[i].first)
        {
            dem++;
        }
        else
            s += a[i].second;
    }
    if (dem == 0)
        cout << "YES";
    else
        cout << "NO\n"
             << dem;
}