#include<iostream>
using namespace std;
void insertatbegin(int arr[],int &n ,int capacity) //we can also pass n(pass by value)
{
    int value;
    cout<<"enter the value which you want to enter : "<<endl;
    cin>>value;
    if(n>= capacity)
    {
        cout<<"array is full. cannot insert new element."<<endl;
        return;
    }
    for(int i=n;i>0;i--)
    {
       arr[i] = arr[i-1];

    }
    arr[0] = value;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int capacity;
    cout<<"Enter the capacity of array : "<<endl;
    cin>>capacity;
    int arr[capacity];
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    cout<<"enter the number of elements in the array : "<<endl;
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
    insertatbegin(arr,n,capacity);
    return 0;
}