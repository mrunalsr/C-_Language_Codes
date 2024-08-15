#include<iostream>
using namespace std;
void atposition(int arr[],int n, int capacity)
{
    int position;
    int value;
    cout<<"Enter the position where you want to change the value : "<<endl;
    cin>>position;
    cout<<"Enter the value you want at that position : "<<endl;
    cin>>value;
    for(int i=n;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position] = value;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int capacity;
    cout<<"Enter the capacity of array : "<<endl;
    cin>>capacity;
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[capacity];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    atposition(arr,n,capacity);
    return 0;
}