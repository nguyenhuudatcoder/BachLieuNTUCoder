/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, s;
int d[105];
int m[105][10005];
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
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> d[i];
    for (int i = 1; i <= s; i++)
    {
        m[0][i] = 1e9;
        int type = -1;
        for (int j = 1; j <= n; j++)
            if (i >= d[j])
            {
                if (m[0][i - d[j]] + 1 <= m[0][i] && m[0][i - d[j]] != 1e9)
                {
                    m[0][i] = m[0][i - d[j]] + 1;
                    type = j;
                }
            }
        if (type != -1)
        {
            for (int j = 1; j <= n; j++)
                m[j][i] = m[j][i - d[type]];
            m[type][i]++;
        }
    }
    cout << m[0][s] << "\n";
    for (int i = 1; i <= n; i++)
        cout << m[i][s] << " ";
}