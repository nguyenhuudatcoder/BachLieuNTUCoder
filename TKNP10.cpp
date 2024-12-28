/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, ans;
int a[100005];
unordered_map<int, int> dem;
bool rannum(int pos)
{
    int tam = 0;
    for (int i = 0; i < n; i += pos)
    {
        tam++;
        for (int j = i; j < min(n, i + pos); j++)
            if (dem[a[j]] ==tam-1)
                dem[a[j]]++;
    }
    for(auto i:dem)
        if(i.second==tam) return 1;
    return 0;
}
void ChatGPT()
{
    int l = 0, r = n;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (rannum(m))
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
        dem.clear();
    }
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ChatGPT();
    cout << ans;
}