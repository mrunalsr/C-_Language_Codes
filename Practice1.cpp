#include<iostream>
#include<climits>
using namespace std;
void DisplaySubarray()
{
    int n;
    int k;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your given array is : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"enter the value of k : "<<endl;
    cin>>k;

    if(k>n)
    {
        cout<<"Invalid input of k is given by you : "<<endl;
    }

    int minsum = INT_MAX;
    int currentsum = 0;
    int startindex = 0;

    for(int i =0;i<k;i++)
    {
        currentsum = currentsum+arr[i];
    }

    minsum = currentsum;

    for(int i = k;i<n;i++)
    {
        currentsum = currentsum -arr[i-k] +arr[i];

        if(currentsum < minsum)
        {
            minsum = currentsum;
            startindex = i-k+1;
        }
    }
    cout<<"Minimum sum of subsequence of length k is : "<<k <<endl;
    for(int i=startindex;i<startindex+k;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Sum is : "<<minsum<<endl;

}
int main()
{
    
    DisplaySubarray();

    return 0;
} 