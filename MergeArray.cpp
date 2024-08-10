#include <iostream>
using namespace std;
void array(int arr[], int n)
{
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
}
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Merge(int arr[], int n,int arr1[],int n1)
{
    int size = n+n1;
    int mergearr[size];
    int i=0,j=0,k=0;
    while(i<n && j<n1)
    {
        if(arr[i] < arr1[j])
        {
            mergearr[k++] = arr[i++];
        }
        else
        {
            mergearr[k++] = arr1[j++];
        }
    }
    while(i<n)
    {
        mergearr[k++] = arr[i++];
    }
    while(j<n1)
    {
        mergearr[k++]= arr1[j++];
    }

    cout<<"The merged array is : "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<mergearr[i]<<" ";
    }

}
int main()
{
    int n, n1;
    cout << "enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    array(arr,n);
    sort(arr, n);
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "enter the size of array : " << endl;
    cin >> n1;
    int arr1[n1];
    array(arr1,n1);
    sort(arr1, n1);
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    Merge(arr,n,arr1,n1);

    return 0;
}