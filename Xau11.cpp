/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s, t;
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
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>t[i]){
            i--;
            while(i>-1&&s[i]==t[i]) i--;
            i++;
            cout<<i;
            return 0;
        }  
    }
    cout << -1;
}