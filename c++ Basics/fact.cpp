#include <iostream>
using namespace std;

int fact(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(n - r) * fact(r));
    cout << ans;
    return 0;
}
