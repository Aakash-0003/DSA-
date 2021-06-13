#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, armstrong = 0;
    cin >> n;
    int c = n;
    while (n > 0)
    {
        int r = n % 10;
        armstrong = armstrong + pow(r, 3);
        n = n / 10;
    }
    if (c == armstrong)
        cout << "armstrong";
    else
        cout << "not armstrong";
    return 0;
}