/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <string>
#include <climits>
#include<cmath>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a, b;
string lcs[1005][1005];
string get(string a, string b)
{
    if (a.size() > b.size())
        return a;
    else if (b.size() > a.size())
        return b;
    else
        return max(a,b);
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> a;
    cin >> b;
    for (int i = 1; i <= a.size(); i++)
    {
        for (int j = 1; j <= b.size(); j++)
        {
            lcs[i][j]=get(lcs[i][j-1],lcs[i-1][j]);
            if (a[i - 1] == b[j - 1])
                lcs[i][j] =get(lcs[i][j], lcs[i - 1][j - 1] + a[i - 1]);
            // cout<<lcs[i][j]<<'-';
        }
        // cout<<'\n';
    }
    // cout<<a<<' '<<b;
    cout << lcs[a.size()][b.size()]<<'\n';
    int j = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] == lcs[a.size()][b.size()][j])
        {
            cout << i + 1 << ' ';
            j++;
        }
    cout<<'\n';
    j = 0;
    for (int i = 0; i < b.size(); i++)
        if (b[i] == lcs[a.size()][b.size()][j])
        {
            cout << i + 1 << ' ';
            j++;
        }
}