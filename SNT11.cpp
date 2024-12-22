#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[100005];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2; i<=sqrt(1e5); i++)
        for(int j=i*i; j<=1e5; j+=i)
            snt[j]=1;
}
int chech(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    int n,save=1;
    cin>>n;
    for(int i=11; i<=n; i++)
    {
        if(snt[i]==0)
        {
            if(snt[chech(i)]==0)
            {
                cout<<i<<" ";
                save=0;
            }
        }
    }
    if(save) cout<<0;
}
