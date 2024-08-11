#include<iostream>
using namespace std;
void product(int arr[],int n)
{
    int temp = arr[0];
    
    for(int i =1;i<n;i++)
    {   
        temp = temp * arr[i];
    }
    cout<<"Output is : "<<temp;
}
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in the array : "<<endl;
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
    product(arr,n);
    return 0;
}