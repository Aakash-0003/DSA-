/*  1    
   212
  32123
 4321234
543212345

[first print n spaces and then taking a variable equals to row no. and then
 incrementing and decrementing it according to decreasing and increasin manner for various situation]


#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int b = i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        while (b > 1)
        {
            cout << b;
            b--;
        }
        cout << "1";
        while (b <= i - 1)
        {
            b++;
            cout << b;
        }

        for (int l = 1; l <= n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// namespace std
*/
/*
    *    
   ***
  *****  
 ******* 
*********


#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (j = 1; j < i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
// namespace std
*/
