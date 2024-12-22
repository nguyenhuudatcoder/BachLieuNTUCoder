#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);
    cout<<a<<" "<<b<<" "<<c;

}
