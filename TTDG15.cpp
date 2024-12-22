#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(i%3==0) ans++;
    cout<<ans;
}
