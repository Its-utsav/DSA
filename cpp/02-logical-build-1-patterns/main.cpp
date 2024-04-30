#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space

        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 1; k < n * 2 - (2 * i - 1); k++)

        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)

        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern13(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << x++ << " ";
        }
        cout << "\n";
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char a = 'A'; a <= 'A' + (n - i - 1); a++)
        {
            cout << a << " ";
        }
        cout << "\n";
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

void pattern17() {}

void pattern18() {}

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < i * 2; k++)
        {
            cout << " ";
        }
        // star

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // space

        for (int k = 0; k < 2 * n - (2 * i + 2); k++)
        {
            // k 8
            cout << " ";
        }

        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < 2 * n - (2 * i + 2); k++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {

        // star
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int k = 0; k < i * 2 + 2; k++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n = 4;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);

    return 0;
}
