/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, p;
int a[100005], b[100005];
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
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    k++;
    p = max(a[0], b[0]);
    int i = 1, j = 1;
    while (i < n && j < n)
    {
        if (a[i] > p && b[j] > p)
        {
            k++;
            p = max(a[i], b[j]);
        }
        if (a[i] <= p)
            i++;
        if (b[j] <= p)
            j++;
    }
    cout << k;
}