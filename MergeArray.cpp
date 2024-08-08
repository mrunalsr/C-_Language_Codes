#include <iostream>
using namespace std;
void MergeArray()
{
    int size1;
    int size2;
    int i = 0;
    cout << "enter the size of first array : " << endl;
    cin >> size1;

    int arr1[size1];
    cout << "enter elements in the first array : " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "The first array is : " << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < size1 - 1; i++)
    {
        for (int j = 0; j < size1 - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    cout << "enter the size of second array : " << endl;
    cin >> size2;

    int arr2[size2];
    cout << "enter elements in the second array : " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    cout << "The second array is : " << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2 - 1; i++)
    {
        for (int j = 0; j < size2 - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    int size = size1 + size2;
    int mergedarray[size];
    // int i;
    int j = 0;
    int k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            mergedarray[k++] = arr1[i++];
        }
        else
        {
            mergedarray[k++] = arr2[j++];
        }
    }
    while (i < size1)
    {
        mergedarray[k++] = arr1[i++];
    }
    while (j < size2)
    {
        mergedarray[k++] = arr2[j++];
    }
    cout << "Merged array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << mergedarray[i] << " ";
    }
}
int main()
{

    MergeArray();
    return 0;
}