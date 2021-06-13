#include <iostream>
using namespace std;

void sumOfArray(int arr[], int k)
{
    int sum = 0;
    cout << "sum of subarray" << endl;
    for (int i = 0; i <= k; i++)
    {

        cout << arr[i];
        sum += arr[i];
        cout << ",";
    }
    cout << "  is" << sum << endl;
}

int sumOfSubArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {

        int arr[n] = {}, k = 0;

        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                arr[k] = a[i];
                cout << "sum of subarray :" << arr[k] << "is " << arr[k] << endl;
                k++;
            }
            else
            {
                arr[k] = a[j];
                sumOfArray(arr, k);
                k++;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sumOfSubArray(a, n);

    return 0;
}