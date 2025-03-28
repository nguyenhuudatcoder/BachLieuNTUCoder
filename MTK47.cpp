#include<iostream>
#include<array>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n;
int a[1000005];
ll d[2];
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
	for(int i=1;i<=n;i++)
		{cin>>a[i];d[a[i]%2]++;a[0]+=a[i]%2;}
	a[0]%=2;
	if(a[0]==0)
		cout<<d[1]*(d[1]-1)/2+d[0]*(d[0]-1)/2;
	else
		cout<<d[0]*d[1];
}