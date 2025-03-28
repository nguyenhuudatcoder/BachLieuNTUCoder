#include<iostream>
#include<array>
#include<cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n;
int a[100005];
int r[100005];
ll s=-inf;
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
	for(int i=0;i<n;i++)cin>>a[i];
	r[n-1]=a[n-1];
	for(int i=n-2;i>1;i--)
		r[i]=max(a[i],r[i+1]);
	int l=a[0];
	for(int i=1;i<n-1;i++)
	{
		s=max(s,1ll*2*l-3*a[i]+5*r[i+1]);
		l=max(l,a[i]);
	}
	cout<<s;
}