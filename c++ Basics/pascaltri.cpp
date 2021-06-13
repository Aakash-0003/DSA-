#include <iostream>
using namespace std;

int fact(int a)
{
    int fact = 1;

    for (int i = 2; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomial(int n1, int n2)
{
    return fact(n1) / (fact(n1 - n2) * fact(n2));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << binomial(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}