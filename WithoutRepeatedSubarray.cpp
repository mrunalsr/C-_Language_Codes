#include<iostream>
using namespace std;
void findsubarray(int arr[],int n,int k)
{
    for(int i=0;i<=n-k;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    int k;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter eleemnts in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the value of k (How many elements in the subarray you want)"<<endl;
    cin>>k;
    findsubarray(arr,n,k);
    return 0;
}
