#include<iostream>
using namespace std;
void movezeros(int n,int arr[])
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count<n)
    {
        arr[count++] =0;
    }
    cout<<"The after moving all zeros are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    movezeros(n,arr);
    return 0;
}