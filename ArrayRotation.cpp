#include<iostream>
using namespace std;
void reverse(int arr[],int left,int right)
{
    while(left<right)
    {
        int temp = arr[left];
        arr[left] =arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}
void rotate(int arr[],int n,int k)
{
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the elemnts of array are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"enter the value of k : "<<endl;
    cin>>k;

    rotate(arr,n,k);
    cout<<"Rotated array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}