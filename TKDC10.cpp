/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
vector<int> cow = {0};
int k;
pair<int, int> a[1000005];
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
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
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i].first >> a[i].second;
        if (a[i].first > a[i].second)
            swap(a[i].first, a[i].second);
    }
    sort(a, a + k,compare);
    for (int i = 0; i < k; i++)
    {
        if (a[i].first > cow[cow.size() - 1])
            cow.push_back(a[i].second - 1);
        else
            cow[cow.size() - 1] = min(cow[cow.size() - 1], a[i].second - 1);
    }
    cout << cow.size();
}