///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
map<int,int> Hammer;
vector<int> Prime={2,3,5};
int lastPrime;
int s=1;
int t,x;
void getHammer(int pos)
{
    for(int i=lastPrime;i<Prime.size();i++)
    {
        lastPrime=i;
        if(1ll*Prime[i]*s>=2*1e9)
            return;
        s*=Prime[i];
        Hammer[s]=1;
        getHammer(pos+1);  //đệ quy
        s/=Prime[i];    //quay lui
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
    getHammer(0);
    int j=1;
    Hammer[1]=1;
    for(auto &i:Hammer)
    {
        i.second=j;
        j++;
    }
    // for(auto i:Hammer)
    //     cout<<i.first<<" "<<i.second<<"\n";
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(Hammer[x]>0)
            cout<<Hammer[x]<<"\n";
        else cout<<-1<<"\n";
    }
}