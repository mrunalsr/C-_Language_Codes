#include<iostream>
using namespace std;
void Move(int arr[],int n)
{
    int count = n-1;
    for(int i = n-1;i>=0;i--)
    {
        if(arr[i]!= 0)
        {
            arr[count--] = arr[i];
        }
    }
    while(count>=0)
    {
        arr[count--] = 0;
    }
    
    cout<<"The array after moving 1 zero : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Move(arr,n);
    return 0;
}