#include <iostream>
using namespace std;

/*int sum_of_n_no(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    return sum;
}*/
int sum_of_n_no(int a)
{
    return (a * (a + 1)) / 2;
}

int main()
{
    int n;
    cin >> n;
    cout << sum_of_n_no(n);

    return 0;
}