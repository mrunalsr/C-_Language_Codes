#include<iostream>
using namespace std;
int checkmajority(int n, int arr[])
{
    int temp = arr[0];
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] == temp)
        {
            count++;
        }
        else{
            count--;
            if(count == 0)
            {
                temp = arr[i];
                count = 1;
            }
        }
        
    }

    count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == temp)
        {
            count++;
        }
    }
    return (count>n/2) ? temp : -1;
}
int main()
{
    int n,result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements here : "<<endl;
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
    result=checkmajority(n,arr);
    
    if(result != -1)
    {
        cout<<"The result is :"<<result<<endl;
    }
    else
    {
        cout<<"No majority element :"<<endl;
    }
    return 0;
}