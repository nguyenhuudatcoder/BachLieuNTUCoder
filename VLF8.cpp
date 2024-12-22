#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        ans+=i*i*i*i;
    cout<<ans;
}
