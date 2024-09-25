#include<iostream>
using namespace std;
int position(int n,int arr[])
{
    int target;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Enter the value of target you want to insert : "<<endl;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(target<arr[i])
        {
            return i-1;
        }
        else if(target == arr[i])
        {
            return i || i+1;
        }
        else if(target>arr[i])
        {
            return i+1;
        }
    }

}
int main()
{
    int n;
    int result;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
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
    result=position(n,arr);
    cout<<"The index of the target is :"<<result<<endl;


    return 0;
}