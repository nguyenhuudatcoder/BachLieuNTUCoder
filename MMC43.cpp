#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool snt[10000007];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=sqrt(n);i++)
        for(int j=i*i;j<=n;j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check();
    for(int i=1;i<=n;i++)
        if(snt[i]==0)
            cout<<i<<" ";
}
