#include <iostream>
using namespace std;
int findduplicate(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (temp == arr[i])
        {
            return arr[i];
        }
        temp = arr[i];
    }
    return -1;  //if no duplicate return
}
int main()
{
    int n;
    int result;
    cout << "enter size of array : " << endl;
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
    result = findduplicate(arr, n);
    if (result != -1)
    {
        cout << "The duplicate element is : " << result << endl;
    }
    else
    {
        cout << "Their is no duplicate element" << endl;
    }

    return 0;
}