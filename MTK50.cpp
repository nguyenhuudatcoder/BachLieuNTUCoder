#include<iostream>
#include<array>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,l,r,q;
ll a[100005];
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
	cin>>n>>q;for(int i=1;i<=n;i++){cin>>a[i];a[i]=a[i-1]+a[i];}
	while(q--){
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<'\n';
	}
}