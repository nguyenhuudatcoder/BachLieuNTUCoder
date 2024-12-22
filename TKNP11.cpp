/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
/*
Dữ liệu vào: Standard input
Dữ liệu ra: Standard output
Giới hạn thời gian: 1.0 giây
Giới hạn bộ nhớ: 128 megabyte

Cho 3 dãy số dương A, B, C cùng có N phần tử. Hãy đếm xem có bao nhiêu bộ 3 số A[i], B[j] và C[k] mà 3 số này là 3 cạnh của 1 tam giác.
Dữ liệu vào: từ file TRIANGLE.INP với cấu trúc:

Dòng đầu chứa số nguyên n (n <= 1000)
Dòng thứ hai chứa các số A1, A2, ..., An.
Dòng thứ ba chứa các số B1, B2, ..., Bn.
Dòng thứ tư chứa các số C1, C2, ..., Cn.
Các số ai, bi, ci đều không vượt quá 104 và được ghi cách nhau bởi dấu cách.

Dữ liệu ra: file văn bản TRIANGLE.OUT gồm một số S duy nhất là số lượng bộ ba số tìm được.

Ví dụ
TRIANGLE.INP

TRIANGLE.OUT

2

2 3

3 1

4 7

2



3

2 3 1

4 4 9

8 5 2

8
*/
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans;
int a[1005], b[1005], c[1005];
void triangle(int a1, int b1)
{
    int x=0, y=-1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int s = c[m];
        if (a1 + b1 > s && a1 + s > b1 && b1 + s > a1)
        {
            x = m;
            r = m - 1;
        }
        else if(a1+b1<=s)
            r=m-1;
        else if(s<=a1-b1||s<=b1-a1)
            l=m+1;
    }
    l = 0;
    r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int s = c[m];
        if (a1 + b1 > s && a1 + s > b1 && b1 + s > a1)
        {
            y = m;
            l = m + 1;
        }
        else if(a1+b1<=s)
            r=m-1;
        else if(s<=a1-b1||s<=b1-a1)
            l=m+1;
    }
    ans+=y-x+1;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    // sort(a, a + n);
    // sort(b, b + n);
    sort(c, c + n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            triangle(a[i],b[j]);
    cout<<ans;
}