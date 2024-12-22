/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long a[2000005], k, c;
long long totalk[2000005];
int n, t;
int longestpos(int i)
{
    // cout<<"price: ";
    int ans=i;
    int l=0,r=i;
    while(l<=r)
    {
        int m=(l+r)/2;
        long long s=totalk[i]-((a[i]-a[m-1])*m+totalk[m-1]);
        /*
            ta có công thức tính tổng chi phí từ 0 -> i là:
            pre[i]=pre[i-1]+i*(a[i]-a[i-1])   *nếu khai báo mảng từ 1, ta có (i-1)*(a[i]-a[i-1])
            do phải tính số chi phí từ j -> i nên ta có công thức tính chi phí từ 0 -> m-1 là:
            A=(pre[i]-pre[m-1])*m+pre[m-1]  *nếu khai báo mảng từ 1 ta có: (pre[i]-pre[m-1])*(m-1)-pre[m-1]
            => số chi phí từ m -> i là:
            pre[i]-A
        */
        // cout<<totalk[i]-s<<"("<<s<<")"<<" ";
        if(s>k)
            l=m+1;
        else{
            r=m-1;
            ans=m;
        }
    }
    return i-ans+1;
}
void COUNT()
{
    for(int i=0;i<n;i++)
    {
        // cout<<a[i]<<":\n";
        int faket=longestpos(i);
        // cout<<"\nfaket="<<faket<<"\n";
        if(faket>t)
        {
            c=a[i];
            t=faket;
        }
    }
    cout<<t<<" "<<c;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i=0;i<n;i++)
    {
        totalk[i]=totalk[i-1]+i*(a[i]-a[i-1]);
    }
    // for(int i=0;i<n;i++)
    //     cout<<totalk[i]<<" ";
    COUNT();
    // kien1[1]=LONG_LONG_MAX;
    // cout<<kien1[1];
}