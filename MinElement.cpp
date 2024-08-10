#include<iostream>
using namespace std;
int Minterm(int arr[], int size)
{
    int temp = arr[0];
    for(int i=1;i<size;i++)
    {
        if(temp>arr[i])
        {
            temp = arr[i];
        }
        else{
            temp=temp;
        }

    }
    return temp;
}
int main()
{
    int size,result;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    result = Minterm(arr,size);
    cout<<"The minimum element is : "<<result;
    return 0;
}