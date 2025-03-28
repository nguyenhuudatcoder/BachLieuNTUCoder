#include<iostream>
#include<array>
#include<vector>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n;
int a[1005];
vector<int> b;
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
	for(int i=n;i>0;i--)
		b.push_back(i);
	for(int i=n-1;i>=0;i--)
	{
		a[n]=a[i];
		a[i]=b[a[n]];
		b.erase(b.begin()+a[n]);
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
}