#include<bits/stdc++.h>
#define int long long
using namespace std;
int a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a;
    int n=sqrt(a);
    if(n*n==a) cout<<"YES";
    else cout<<"NO";
}
