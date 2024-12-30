///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
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
    cin>>s;
    int dem=0;
    for(int i=0;i<s.size();i++)
        if(s[i]!='('&&s[i]!=')')
        {
            cout<<"KHONG HOP LE";
            exit(0);
        }
    for(int i=0;i<s.size();i++)
    {
        if(dem<0){
            cout<<"KHONG DUNG";
            exit(0);
        }
        if(s[i]=='(') dem++;
        else dem--;
    }
    if(dem>0) cout<<"KHONG DUNG";
    else cout<<"DUNG";
}