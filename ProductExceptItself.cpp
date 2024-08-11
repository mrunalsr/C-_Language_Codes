#include <iostream>
using namespace std;
void product(int arr[], int n)
{
    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = 1;
    }
    int left = 1;
    for (int i = 0; i < n; i++)
    {
        result[i] = left;
        left = left * arr[i];
    }
    cout << "The product array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        result[i] = result[i] * right;
        right = right * arr[i];         //The array values
    }
    cout << "The product array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    product(arr, n);

    return 0;
}