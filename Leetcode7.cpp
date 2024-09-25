#include<iostream>
using namespace std;
void removeduplicate(int n,int arr[])
{
    int removedarray[n];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0,j=0;
    for(int i=0;i<n;i++)
    {
        if(i == 0 || arr[i]!= arr[i-1])
        {
            removedarray[j++] = arr[i++];
        }
    }
    cout<<"The array is :"<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<removedarray[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removeduplicate(n,arr);
    return 0;
}