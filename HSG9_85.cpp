/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[200005], x, y, z, ans;
ll X[200005],Z[200005];
void getX()
{
    X[0]=a[0];
    if(x<=0)
        for(int i=1;i<n;i++)
            X[i]=min(X[i-1],a[i]);
    else
        for(int i=1;i<n;i++)
            X[i]=max(X[i-1],a[i]);
}
void getZ()
{
    Z[n-1]=a[n-1];
    if(z<=0)
        for(int i=n-2;i>=0;i--)
            Z[i]=min(Z[i+1],a[i]);
    else
        for(int i=n-2;i>=0;i--)
            Z[i]=max(Z[i+1],a[i]);
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
        cin >> a[i];
    cin >> x >> y >> z;
    getX();
    getZ();
    for(int i=1;i<n-1;i++)
        ans=max(ans,X[i-1]*x+y*a[i]+Z[i+1]*z);
    cout << ans;
}