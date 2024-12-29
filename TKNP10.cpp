/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, ans = 100000005;
int a[1000005];
int res[200005], pos[200005];
void ChatGPT()
{
    for (int i = 1; i <= n; i++)
    {
        if (pos[a[i]] == 0)
            res[a[i]] = i - pos[a[i]] + 1;
        else
            res[a[i]] = max(res[a[i]], i - pos[a[i]]);
        pos[a[i]] = i;
    }
    for (int j = -100000; j <= 100000; j++)
        if (pos[j] > 0)
            res[j] = max(res[j], n - pos[j] + 1);
    for (int i = -100000; i <= 100000; i++)
        if (res[i] > 0)
            ans = min(ans, res[i]);
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
    // cout<<pos[-1000];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ChatGPT();
    cout << ans;
}