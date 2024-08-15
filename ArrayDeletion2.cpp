#include<iostream>
using namespace std;
void delete1(int arr[], int n)
{
    int position;
    cout<<"Enter position at which you want to delete element : "<<endl;
    cin>>position;
    for(int i=position-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"The array is : "<<endl;
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
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete1(arr,n);
    return 0;
}