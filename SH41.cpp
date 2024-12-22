///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
bool snt[1005];
void make()
{
    snt[0]=snt[1]=1;
    for(int i=2;i*i<=1000;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1000;j+=i)
                snt[j]=1;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make();
    while(cin>>n)
    {
        for(int i=2;i<=n;i++)
            if(snt[i]==0)
            {
                int dem=0;
                int m=n;
                while(m>=i)
                {
                    dem+=m/i;
                    m/=i;
                }
                cout<<dem<<" ";
            }
        cout<<"\n";
    }
}