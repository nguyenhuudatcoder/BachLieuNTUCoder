#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>a>>b){
        if(b==0) cout<<"-1\n";
        else if(a%b==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
