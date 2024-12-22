/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, ans;
long a[1000005];
// map<long, int> dem;
long Max[1000005];
/*
chọn từng đứa được N điểm
cộng N-1,N-2,N-3... với mấy đứa khác
nếu đứa được chọn cao nhất so với mấy đứa khác được cộng thì ans++
*/
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // for (int i = 0; i < n; i++)
    //     dem[a[i]]++;
    sort(a, a + n);
    int k = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        Max[i] = max(Max[i + 1], a[i] + k);     ///cộng điểm(tăng dần) cho mấy đứa đang có điểm cao nhất trở xuống
        k++;
    }
    // for(int i=0;i<n;i++)
    //     cout<<Max[i]<<" ";
    for (int i = 0; i < n; i++)
        if (a[i] + n >= Max[i + 1])     ///nếu mà điểm đứa được chọn cao nhất
            ans++;
    cout << ans;
}