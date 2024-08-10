#include<iostream>
using namespace std;
int sumofsubarray(int arr[],int n, int start,int end)
{
    int sum=0;
    for(int i = start;i<=end;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    int n,result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elemenets in the array : "<<endl;
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
    int start,end;
    cout<<"enter the value from where you want the sum "<<endl;
    cin>>start;
    cout<<"Enter end where you want to stop :"<<endl;
    cin>>end;
    result = sumofsubarray(arr,n,start,end);
    cout<<"The sum of given subarray is :"<<result<<endl;

    return 0;
}