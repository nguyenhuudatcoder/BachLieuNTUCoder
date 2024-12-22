#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return n;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(check(n))cout<<"YES\n";
    else cout<<"NO\n";
    for(int i=n-1;i>1;i--)
    if(check(i)!=0){
        cout<<i;
        return 0;
    }
}
