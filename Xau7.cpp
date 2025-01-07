/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
string s[100005];
bool pos[100005];
bool numonly(string s)
{
    for(int i=0;i<s.size();)
        if(s[i]>='0'&&s[i]<='9')i++;
        else return 0;
    return 1;
}
void ChatGPT(int i,int j)
{
    while(s[i][0]=='0')s[i].erase(0,1);
    while(s[j][0]=='0')s[j].erase(0,1);
    if(s[i].size()==s[j].size())if(s[i]>s[j])swap(s[i],s[j]);
    if(s[i].size()>s[j].size())swap(s[i],s[j]);
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        pos[i] = numonly(s[i]);
    }
    for (int i = 0; i < n - 1; i++)
        if(pos[i]==1)
            for(int j=i+1;j<n;j++)
                if(pos[j]==1)
                    ChatGPT(i,j);
    for(int i=0;i<n;i++)cout<<s[i]<<" ";
}