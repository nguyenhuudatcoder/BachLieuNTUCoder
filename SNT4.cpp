#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool snt[15];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2; i<=sqrt(10); i++)
        for(int j=i*i; j<=10; j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check();
    int ans=0;
    while(n>0)
    {
        if(snt[n%10]==0)
             ans++;
        n/=10;
    }
    cout<<ans;
}
