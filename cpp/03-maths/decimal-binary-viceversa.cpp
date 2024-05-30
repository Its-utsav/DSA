// simple converions
#include <bits/stdc++.h>
using namespace std;
int decimalToBn(int n)
{
    int ans = 0;
    if (n > 0)
    {
        int i = 0;
        while (n != 0)
        {
            int lastBit = n & 1;
            ans = ans + (lastBit * pow(10, i));
            n = n >> 1;
            i++;
        }
    }
    return ans;
}
int bnToDc(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 1)
        {
            ans = ans + pow(2, i);
        }
        n /= 10;
        i++;
    }
    return ans;
}
int main()
{
    int n = 10;
    int ans = decimalToBn(n); // 1010
    int bn = 1010;            // 10
    int ans1 = bnToDc(bn);
    cout << ans << '\n'
         << ans1;
    return 0;
}