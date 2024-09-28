#include<iostream>
using namespace std;

void merge(int n1, int n2, int arr[], int arr1[])
{
    int i = 0, j = 0, k = 0;  
    int size = n1 + n2;
    int merged[size];
    
    while (i < n1 && j < n2)
    {
        if (arr[i] < arr1[j])
        {
            merged[k++] = arr[i++];
        }
        else
        {
            merged[k++] = arr1[j++];
        }
    }
    
    while (i < n1)
    {
        merged[k++] = arr[i++];
    }
    
    while (j < n2)
    {
        merged[k++] = arr1[j++];
    }

    cout << "The merged array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter the sizes of arrays n1 and n2 : " << endl;
    cin >> n1 >> n2;

    int arr[n1], arr1[n2];

    cout << "Enter elements in the first array : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "The first array is : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter elements in the second array : " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr1[i];
    }
    cout << "The second array is : " << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    merge(n1, n2, arr, arr1);

    return 0;
}
