/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int k, ans;
string s;
vector<int> pos;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k;
    cin >> s;
    if (k == 0)
    {
        cout << 0;
        exit(0);
    }
    pos.push_back(-1);
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            pos.push_back(i);
    pos.push_back(s.size());
    if (k > pos.size() - 2)
    {
        cout << 0;
        exit(0);
    }
    for (int i = k; i < pos.size() - 1; i++)
    {
        int left = (pos[i - k + 1] - pos[i - k]);
        int right = (pos[i + 1] - pos[i]);
        ans += left * right;
    }
    cout << ans;
}
