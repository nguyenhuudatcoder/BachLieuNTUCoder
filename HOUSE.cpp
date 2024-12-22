/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, x, ans;
vector<ll> b = {-inf};
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
    // for (auto i : b)
    //     cout << i << " ";
    // cout<<b.size();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= b[b.size() - 1])
        {
            if (b.size() %2==1)
                b[b.size() - 1] = x;
            else
                b.push_back(x);
        }
        else if(x<b[b.size()-1])
        {
            if (b.size() % 2 == 0)
                b[b.size() - 1] = x;
            else
                b.push_back(x);
        }
    }
    if(b.size()<2)
    {
        cout<<-1;
        exit(0);
    }
    for (int i = 1; i < b.size(); i += 2)
        ans += b[i-1] - b[i];
    cout << ans;
}