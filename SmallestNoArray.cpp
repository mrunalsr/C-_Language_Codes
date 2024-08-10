//Smallest 1st element
#include<iostream>
using namespace std;
int small(int arr[],int n)
{
    int temp =arr[0];
    for(int i=1;i<n;i++)
    {
        if(temp>arr[i])
        {
            temp = arr[i];
        }
        else{
            temp = temp;
        }
    }
    return temp;
}
int main()
{
    int n,result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    result= small(arr,n);
    cout<<"Minimum element in the array is :"<<result<<endl;
    return 0;
}