///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
unordered_map<int,bool> c;
int n,a[100005],d[1005];
bool checkRd(int r)
{
    bool save=0;
    int l=1;
    for(int i=1;i<=r;i++)
    {
        d[a[i]]++;
        c[a[i]]=1;
    }
    r++;
    for(;r<=n;r++,l++)
    {
        d[a[r]]++;
        d[a[l]]--;
        if(d[a[l]]==0)
            c[a[l]]=0;
    }
    for(auto &i:c){
        if(i.second)
            save=1;
        i.second=0;
        d[i.first]=0;
    }
    return save;
}
void ChatGPT()
{
    int l=1,r=n;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(checkRd(m))
            r=m-1;
        else l=m+1;
    }
    cout<<r+1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c[a[i]]=0;
    }
    ChatGPT();
}