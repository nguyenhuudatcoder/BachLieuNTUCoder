/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long

kien lcm(kien a, kien b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    kien n;
    cin >> n;
    vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int m = nums.size();

    kien count = 0;

    for (int mask = 1; mask < (1 << m); mask++)
    {
        kien lcm_val = 1;
        int bits = 0;

        for (int i = 0; i < m; i++)
        {
            if (mask & (1 << i))
            {
                lcm_val = lcm(lcm_val, nums[i]);
                bits++;
            }
        }

        if (lcm_val > n)
            continue;
        if (bits % 2 == 1)
        {
            count += n / lcm_val;
        }
        else
        {
            count -= n / lcm_val;
        }
    }
    cout << n - count << endl;

    return 0;
}