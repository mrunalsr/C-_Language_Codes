#include<iostream>
using namespace std;
void subarray(int arr[],int n,int k)
{
    int max_far=arr[0];
    int max_end = arr[0];

    int start = 0,end = 0,s =0;
    for(int i =1;i<n;i++)
    {
        if(max_end + arr[i] > arr[i])
        {
            max_end = max_end + arr[i];
        }
        else{
            max_end = arr[i];
            s =i;
        }
        if(max_end > max_far)
        {
            max_far = max_end;
            start = s;
            end = i;
        }
    }
    cout<<"Maximum subarray sum is : "<<max_far<<endl;
    cout<<"Subarray with the maximum sum is : ";
    for(int i = start;i<=end;i++)
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
    cout<<"Enter eleemnts in the array : "<<endl;
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
    int k;
    cout<<"Enter the value of k : (size of subarray)"<<endl;
    cin>>k;
    subarray(arr,n,k); 
    return 0;
}