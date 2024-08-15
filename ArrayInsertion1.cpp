#include<iostream>
using namespace std;
void atend(int arr[],int &n,int capacity)
{
    int value;
    cout<<"Enter the value you want to enter at the end of the array :"<<endl;
    cin>>value;
    if(n>= capacity)
    {
        cout<<"arrayis full"<<endl;
        return;
    }
    arr[n] = value;
    n++;
    cout<<"The new array is : "<<endl;
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
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[capacity];
    cout<<"Enter the elements in the array :"<<endl;
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
    atend(arr,n,capacity);
    return 0;
}