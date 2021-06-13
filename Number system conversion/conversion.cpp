#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(int a)
{
    int ans = 0;
    int exponent = 0;
    while (a > 0)
    {
        int lastdigit = a % 10;

        int c = lastdigit * pow(2, exponent);
        ans += c;
        exponent++;
        a /= 10;
    }
    return ans;
}
int octal_to_decimal(int a)
{
    int ans = 0, exponent = 0;
    while (a > 0)
    {
        int lastdigit = a % 10;

        int c = lastdigit * pow(8, exponent);
        ans += c;
        exponent++;
        a /= 10;
    }
    return ans;
}

int hexadecimal_to_decimal(string a)
{
    int ans = 0, exponent = 0, digit = 0;
    int size = a.length();
    for (int i = size - 1; i >= 0; i--)
    {

        if (a[i] >= 'A' && a[i] <= 'F')
        {
            digit = a[i] - 'A' + 10;
        }
        else if (a[i] >= 'a' && a[i] <= 'f')
        {
            digit = a[i] - 'a' + 10;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            digit = a[i] - '0';
        }
        ans += (digit * (pow(16, exponent)));
        exponent++;
    }
    return ans;
}

//decimalToBinary

int decimalToBinary(int a)
{
    int ans = 0;
    int exponent = 0;
    while (a >= 2)
    {
        int digit = a % 2;
        ans += (digit * (pow(10, exponent)));
        a = a / 2;
        exponent++;
    }
    ans += (a * (pow(10, exponent)));
    return ans;
}

//decimalToOctal

int decimalToOctal(int a)
{
    int ans = 0;
    int exponent = 0;
    while (a >= 8)
    {
        int digit = a % 8;
        ans += (digit * (pow(10, exponent)));
        a = a / 8;
        exponent++;
    }
    ans += (a * (pow(10, exponent)));
    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << decimalToBinary(n);

    return 0;
}
