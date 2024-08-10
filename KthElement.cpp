//Smallest 2nd element in the array
#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
    int i =0;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
   // temp = arr[i];   //1st smallest
    //temp = arr[i+1];  //2nd smallest
    //temp = arr[n-1];   //1st largest
    temp = arr[n-2];   //2nd largest
    return temp;
}
int main()
{
    int n,result;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    result = sort(arr,n);
    cout<<"The 2nd minimum number is : "<<result<<endl;
    return 0;
}