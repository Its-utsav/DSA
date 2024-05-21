#include <bits/stdc++.h>
using namespace std;
int countDigit(int n)
{
    // int count = 0;

    // while (n > 0)
    // {
    //     int lastDigit = n % 10;
    //     count++;
    //     n /= 10;
    // }

    // or

    int count = (int)(log10(n) + 1);
    return count;
}

int revNum(int n)
{
    int rev = 0;

    if(n>0){
        
    }
    return 0;
}
int main()
{
    int num = 1234;
    int ans = countDigit(num);
    int revAns = revNum(num);

    cout << ans << revAns;
    return 0;
}