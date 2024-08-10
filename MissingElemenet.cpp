#include<iostream>
using namespace std;
int MissingElement(int arr[],int n)
{
    int totalsum = (n+1)*(n+2)/2;
    int arrsum =0;
    for(int i=0;i<n;i++)
    {
        arrsum = arrsum+arr[i];
        
    }
    return totalsum-arrsum;
}
int main()
{
    int n;
    int result;
    cout<<"enter the size of array excluding missing element : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elemets in array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    result = MissingElement(arr,n);

    cout<<"The missing elemnt is : "<<result;
    return 0;
}

