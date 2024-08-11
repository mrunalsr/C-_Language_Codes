#include <iostream>
using namespace std;
bool array(int arr[], int n, int target, int subset[], int subsetsize)
{
    if (target == 0)
    {
        cout << "Subset with the given sum is : ";
        for (int i = 0; i < subsetsize; i++)
        {
            cout << subset[i] << " ";
        }
        cout << endl;
        return true;
    }
    if (n == 0 && target != 0)
    {
        return false;
    }
    if (arr[n - 1] > target)
    {
        return array(arr, n - 1, target, subset, subsetsize);
    }
    if (array(arr, n - 1, target, subset, subsetsize))
    {
        return true;
    }

    subset[subsetsize] = arr[n - 1];
    if (array(arr, n - 1, target - arr[n - 1], subset, subsetsize + 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    bool result;
    cout << "enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in the array : " << endl;
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
    int target;
    cout << "enter the target value : " << endl;
    cin >> target;
    int subset[n];

    if (!array(arr, n, target, subset, 0))
    {
        cout << "No subset with the given sum exists : " << endl;
    }
    return 0;
}