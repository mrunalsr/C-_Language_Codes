#include<iostream>
using namespace std;
int search(int arr[],int n)
{
    int value;
    cout<<"enter the value you want to search : "<<endl;
    cin>>value;
    for(int i =0;i<n;i++)
    {
        if(arr[i]== value)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    int result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array : "<<endl;
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
    result = search(arr,n);
    cout<<"Index of that number is : "<<result<<endl;

    return 0;
}