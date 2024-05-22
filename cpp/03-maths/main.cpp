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

    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n /= 10;
    }

    return rev;
}

bool checkPalindrom(int n)
{
    int copyN = n;
    int ans = revNum(n);
    return copyN == ans ? true : false;
}

bool armStrongNumber(int n)
{
    int armSum = 0;
    // count Digit
    int totalDigit = to_string(n).length();
    int copyN = n;
    // go till last digit
    while (n > 0)
    {
        int lastDigit = n % 10;
        armSum = (pow(lastDigit, totalDigit)) + armSum;
        n /= 10;
    }
    return armSum == copyN ? true : false;
}

void findDivisors(int n)
{
    vector<int> divisors;
    int sqrtN = sqrt(n);

    for (int i = 1; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);

            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());

    for (auto it : divisors)
        cout << it << " ";
}
bool checkPrime(int n)
{
    // only two factors
    // 1. and it self number
    if (n <= 1)
    {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int findGcd(int n1, int n2)
{
    int minN = min(n1, n2);
    // cout << ;
    int gcd = 1;
    for (int i = 1; i <= minN; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int euclideanAlgo(int n1, int n2)
{
    // looping way
    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }else{
            n2 = n2 -n1;
        }
    }
    return n1;
}

int main()
{
    int num = 13;
    int ans = countDigit(num);
    int revAns = revNum(num);
    bool palindrom = checkPalindrom(num);
    bool arm = armStrongNumber(num);
    // cout << ans << revAns;
    // cout << arm;
    // findDivisors(num);
    // bool prime = checkPrime(num);
    int num1 = 9;
    int num2 = 12;
    int gcd = euclideanAlgo(num1, num2);
    cout << gcd;
    return 0;
}