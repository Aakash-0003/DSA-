#include <iostream>
using namespace std;

bool is_primeno(int n1)
{

    for (int i = 2; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (is_primeno(i))
        {
            cout << "Prime No. " << i << endl;
        }
    }

    return 0;
}
