#include<iostream>
using namespace std;
void update(int arr[] , int n)
{
    int value;
    int position;
    cout<<"Enter the position at which you want to change element : "<<endl;
    cin>>position;
    cout<<"Enter the value you want at that position : "<<endl;
    cin>>value;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[position])
        {
            arr[i] = value;
        }
    }
    cout<<"The array after updation is : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array " <<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
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
    update(arr,n);
    return 0;

}