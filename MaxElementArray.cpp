#include<iostream>
using namespace std;
int MaxElement(int arr[],int size)
{
    int temp=arr[0];
    for(int i =1;i<size;i++)
    {
        if(temp<arr[i])
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
    int size;
    int result;
    cout<<"Enter size of array :" <<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    result  = MaxElement(arr,size);
    cout<<"The maximum element is : "<<result<<endl;

    return 0;
}