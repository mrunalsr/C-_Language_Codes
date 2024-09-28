#include<iostream>
using namespace std;
int single(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[i+1])
        {
            return 1 ;
        }
        else{
            return arr[i];
        }
    }
}
int main()
{
    int n,result;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    result=single(n,arr);
    cout<<"The sinle number is : "<<result<<endl;
    return 0;
}