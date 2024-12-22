/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m, a[105], b[105], k;
int s[105][105], maxx[105][105];
vector<int> pos;
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    // BÀI NÀY NÊN LẬP BẢNG
    // DÒNG LÀ i
    // CỘT LÀ j
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j >= b[i])
            {
                s[i][j] = max(maxx[i - 1][j - b[i]] + a[i], s[i][j - 1]);   // lấy max giá trị ở cục vàng i, thể tích j
                // k=max(k,s[i][j]);
            }
            maxx[i][j] = max({maxx[i][j - 1], s[i][j], maxx[i - 1][j]});    // lấy max của mảng 2 chiều từ 1->j
            // cout << s[i][j] << " ";
            // cout<<maxx[i][j]<<" ";
        }
        // cout << "\n";
    }
    cout << maxx[n - 1][m] << "\n";
    // cout<<maxx[0][0]<<"\n";
    int t = maxx[n - 1][m]; //t là giá trị hiện tại
    int dist = n - 1;
    int c = m;
    while (t > 0)
    {
        // với for này, ta đi tìm có cục vàng có giá trị lớn nhất và thể tích bé nhất
        // với t ta sẽ tìm các giá trị s[i][j]
        int tam = c;    //thể tích lớn nhất có thể nhặt được
        int ma = 0; //lấy giá trị lơn nhất
        int poss = dist; // số hiệu của cục vàng
        for (int i = dist; i >= 0; i--) // xét từng cục vàng
        {
            for (int j = 1; j <= c; j++)    //tìm thể tích bé nhất
                if (s[i][j] == t)   //nếu giá trị của cục i, thể tích j = giá trị hiện tại
                {
                    ma = a[i];
                    poss = i;
                    tam = j - b[i];
                }
        }
        pos.push_back(poss + 1);
        t -= ma;
        dist = poss - 1;    //duyệt các cục vàng i còn lại
        c = tam;
        k++;
    }
    cout << k << " ";
    // sort(pos.begin(), pos.end());
    for (int i = pos.size() - 1; i >= 0; i--)
        cout << pos[i] << " ";
}
/*
10 20
7 8
3 8
4 6
2 3
2 5
1 6
3 9
2 3
9 8
9 5

ans: 3 3 9 10
*/