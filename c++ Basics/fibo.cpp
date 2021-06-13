#include <iostream>
using namespace std;
int a = 0, b = 1;
int fibo(int n1)
{

    if (n1 == 0)
    {
        return 0;
    }
    else if (n1 == 1)
    {
        return 1;
    }
    else
    {
        int c = a + b;
        a = b;
        b = c;
        return c;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << fibo(i) << endl;
    }

    return 0;
}