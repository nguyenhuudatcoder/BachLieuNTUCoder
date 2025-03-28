#include<iostream>
#include<array>
#include<cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n;
int a[1005];
ll ans;
main()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	// cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int res=a[i];
		for(int j=i;j>=0;j--)
		{
			res=min(res,a[j]);
			ans=max(ans,1ll*res*(i-j+1));
		}
	}
	cout<<ans;
}