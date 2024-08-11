//only two digit sum
#include <iostream>
using namespace std;
void sum(int arr[], int n, int value)
{
    int target = value;
    int sum = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
                return;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements in the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int value;
    cout << "enter the target value : " << endl;
    cin >> value;

    sum(arr, n, value);
    return 0;
}