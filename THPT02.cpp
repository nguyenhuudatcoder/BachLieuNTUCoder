///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
bool pos[1000005];
int dem;
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
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='#')
            dem++;
        else
        {
            if(dem>0)
            {
                pos[i]=1;
                dem--;
            }
        }
    }
    for(int i=0;i<s.size();i++)
        if(pos[i]==0&&s[i]!='#')
            cout<<s[i];
}