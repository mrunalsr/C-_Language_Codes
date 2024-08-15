#include<iostream>
using namespace std;
void delete1(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]= arr[i+1];
    }
    n--;
    cout<<"The array after deletion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
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
    delete1(arr,n);
    return 0;
}