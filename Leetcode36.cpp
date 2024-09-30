#include<iostream>
using namespace std;
class Solution
{
    public:
    void thirdMax(int n,int arr[])
    {
        for(int i=0;i<n-1;i++)
        {
           for(int j=0;j<n-i-1;j++)
           {
                if(arr[j] <arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
           }
        }
        int temp[n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != arr[i+1])
            {
                temp[k++] = arr[i];
            }
        }
        if(k>=3)
        {
            cout<<"The 3rd maximum number is : "<<temp[2];
        }
        else{
            cout<<"The maximum element is :  "<<temp[0];
        }
        
    }
};
int main()
{
    int n;
    int result;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the no in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array elements are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    solution.thirdMax(n,arr);
    return 0;
}