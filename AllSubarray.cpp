#include<iostream>
using namespace std;
void AllSubarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            cout<<"The subarray from index "<<i<<" to index "<<j<<endl;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    AllSubarray(arr,n);
    return 0;
}