/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string x, y;
string ans;
vector<int> a, b;
string Max(string a, string b, string c)
{
    if (a.size() > b.size() && a.size() > c.size())
        return a;
    if (b.size() > a.size() && b.size() > c.size())
        return b;
    if (c.size() > a.size() && c.size() > b.size())
        return c;
    if (a.size() == b.size() && a.size() > c.size())
        return (a > b) ? a : b;
    if (a.size() == c.size() && a.size() > b.size())
        return (a > c) ? a : c;
    if (b.size() == c.size() && b.size() > a.size())
        return (b > c) ? b : c;
    return max({a, b, c});
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
    cin >> x;
    cin >> y;
    string lcs[x.size() + 5][y.size() + 5];
    x = ' ' + x;
    y = ' ' + y;
    // lcs[0][0]=y;
    // cout<<lcs[0][0];
    for (int i = 1; i < x.size(); i++)
        for (int j = 1; j < y.size(); j++)
            if (x[i] == y[j])
            {
                lcs[i][j] = Max(lcs[i - 1][j], lcs[i][j - 1], lcs[i - 1][j - 1] + y[j]);
            }
            else
                lcs[i][j] = Max(lcs[i - 1][j], lcs[i][j - 1], lcs[i - 1][j - 1]);
    ans = lcs[x.size() - 1][y.size() - 1];
    if (ans.empty() == 0)
    {
        cout << ans << "\n";
        int l = x.size() - 1, r = ans.size() - 1;
        while (l > 0 && r >= 0)
        {
            if (x[l] == ans[r])
            {
                a.push_back(l);
                r--;
            }
            l--;
        }
        l = y.size() - 1, r = ans.size() - 1;
        while (l > 0 && r >= 0)
        {
            if (y[l] == ans[r])
            {
                b.push_back(l);
                r--;
            }
            l--;
        }
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << "\n";
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i] << " ";
    }
    else cout<<"";
}