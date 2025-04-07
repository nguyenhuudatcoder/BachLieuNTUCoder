/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[105], s, t[100005];
void get(int sum)
{
    if (sum == 0)
        return;
    get(sum - a[t[sum]]);
    cout << t[sum] << ' ';
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if(t[a[i]]==0)
            t[a[i]] = i;   
        for (int j = a[i] + 1; j <= s; j++)
            if(t[j-a[i]]!=0&&t[j]==0&&t[j-a[i]]!=i)
                t[j]=i;
    }
    if(t[s]==0)
        cout<<"NO";
    else{
        cout<<"YES\n";
        get(s);
    }
}