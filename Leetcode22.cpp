#include<iostream>
using namespace std;
void check(int n,int arr[])
{
    int threashold;
    int size = 0;
    int arr1[n];
    
    cout<<"Enter the value of threashold : "<<endl;
    cin>>threashold;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1] > threashold)
        {
            arr1[size++] = i;
        }
    }
    cout<<"The final array is : "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr1[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array of mountain heights : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the heights of mountains "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The heights of mountains are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    check(n,arr);
    return 0;
}