#include<iostream>
using namespace std;
void remove(int n,int arr[])
{
    int target;
    cout<<"Enter the elemnt you want to remove :"<<endl;
    cin>>target;
    for(int i=0;i<n;i++)
    {
       if(target != arr[i])
       {
            cout<<arr[i]<<" ";
       } 
       else{
            cout<<" ";
       }
    }
   /* cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
}
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    remove(n,arr);
    return 0;
}