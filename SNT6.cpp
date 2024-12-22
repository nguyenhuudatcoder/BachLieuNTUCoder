#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[10000005];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        for(int j=i*i;j<=1e7;j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    int a,b,s=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
            s+=i;
    cout<<s;

}
