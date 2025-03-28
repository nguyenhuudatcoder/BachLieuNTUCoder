#include<iostream>
#include<array>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,m,k;
bool sv[100005];
struct ct{
    int t;bool f,c;int id;
};
bool cmp(ct a,ct b)
{
    if(a.t==b.t)
        return a.c<b.c;
    return a.t<b.t;
}
ct a[200005];
main()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++){
        int t,d;bool b;
        cin>>t>>d>>b;
        a[i*2-1]={t,b,1,i};
        a[i*2]={t+d,b,0,i};
    }
    k*=2;
    sort(a+1,a+k+1,cmp);
    for(int i=1;i<=k;i++)
        if(a[i].c==0){
            if(sv[a[i].id]==1){
                n++;
                if(a[i].f==1)
                    m++;
            }
        }
        else{
            if(a[i].f==1){
                if(n>0&&m>0){
                    cout<<"Yes\n";
                    sv[a[i].id]=1,n--,m--;
                }
                else
                    cout<<"No\n";
            }
            else{
                if(n>0){
                    cout<<"Yes\n";
                    sv[a[i].id]=1,n--;
                }
                else
                    cout<<"No\n";
            }
        }
}
