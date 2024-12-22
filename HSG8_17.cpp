#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans,a[1005];
int x;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    if(x==1){
        cout<<-1;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--)
            if(a[j]+a[i]==x)
                ans++;
    }
    if(ans==0) cout<<-1;
    else cout<<ans;
}
