///A game will be our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
bool snt[1000005];
void get_answer()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
        {
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
        }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    get_answer();
    int pos=0;
    for(int i=2;i<=1e6;i++)
        if(snt[i]==0)
        {
            pos++;
            if(snt[pos]==0)
            {
                n--;
                if(n==0)
                {
                    cout<<i;
                    exit(0);
                }
            }
        }
}