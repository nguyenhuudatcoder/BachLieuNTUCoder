///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    while(a[0]=='0') a.erase(0,1);
    while(b[0]=='0') b.erase(0,1);

    if(a.size()>b.size()) cout<<1;
    else if(a.size()<b.size()) cout<<-1;
    else{
        if(a>b) cout<<1;
        else if(a<b) cout<<-1;
        else cout<<0;
    }
}
