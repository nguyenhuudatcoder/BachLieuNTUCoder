///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,asize,bsize,x,ans;
int da[100005],a[100005]; // trai dương, gái âm
int db[100005],b[100005]; // trai âm, gái dương
void input()
{
    cin>>n;
    for(int i=0;i<n;i++){// nhập boy
        cin>>x;
        if(x>0) a[++asize]=x;
        else b[++bsize]=x;
    }
    sort(a+1,a+asize+1);
    sort(b+1,b+bsize+1);
}
void TraiDuong()
{
    int p=lower_bound(a+1,a+asize+1,-x)-a;
    da[p-1]--;
}
void TraiAm()
{
    int p=lower_bound(b+1,b+bsize+1,-x)-b;
    db[p-1]--;
}
void ChatGPT()
{
    x=0;
    for(int i=1;i<=asize;i++)
        if(da[i]<0)
        {
            int t=i-x;
            ans+=min(t,-da[i]);
            x+=min(t,-da[i]);
        }
    x=0;
    for(int i=1;i<=bsize;i++)
        if(db[i]<0)
        {
            int t=i-x;
            ans+=min(t,-db[i]);
            x+=min(t,-db[i]);
        }
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    input();
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0) //trai dương
            TraiDuong();
        else
            TraiAm();
    }
    ChatGPT();
}