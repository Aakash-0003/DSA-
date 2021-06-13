#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, reverse = 0;
    cin >> n;
    int c = n;
    while (n > 0)
    {
        int r = n % 10;
        reverse = reverse * 10 + r;
        n = n / 10;
    }
    cout << "Reverse no. of " << c << "is " << reverse << endl;
    return 0;
}