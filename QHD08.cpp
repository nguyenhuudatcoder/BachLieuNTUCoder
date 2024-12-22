/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, w, a[1005], c[1005];
int s[1000050];
map<int, int> pick;
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
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> c[i];
    for (int i = 1; i <= w; i++)    //thể tích của balo
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= a[j])
                s[i] = max(s[i],s[i - a[j]] + c[j]);    //lấy số tiền lớn nhất
        }
    }
    cout << s[w]<<"\n";
    for (int i = 0; i < n; i++)
    {
        while(w>=a[i]&&s[w]==s[w-a[i]]+c[i])    //kiểm tra với số tiền s[w-a[i]]+c[i] có sử dụng tiếp không
        /*
        ta có: s[i]=max(s[i],s[i-a[j]]+c[j])
        -> s[w-a[i]]=s[w-a[j]]+c[j]     (i=j)
        */
        {
            pick[i]++;
            w-=a[i];
        }
    }
    for(auto i:pick)
    {
        cout<<i.first+1<<" "<<i.second<<"\n";
    }
}