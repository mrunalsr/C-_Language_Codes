#include<iostream>
using namespace std;
class Solution{
    public:
    int calculate(int n,int arr[])
    {
        int sum = 0;
        int temp[n]={1};
        for(int i=0;i<n;i++)
        {
            temp[i] = 1;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp[i] += 1;
            }
            else if(arr[i]<arr[i+1])
            {
                temp[i+1] += 1;
            }
        }
        cout<<"the result is :"<<endl;
        for(int i=0;i<n;i++)
        {
            sum = sum +temp[i];
        }
        return sum;
    }
    

};
int main()
{
    int n;
    int result;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter ratings of childrens in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Ratings"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    result = solution.calculate(n,arr);
    cout<<"the result is : "<<result<<endl;
    return 0;
}