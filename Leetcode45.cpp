#include<iostream>
using namespace std;
class Solution{
    public:
    void calculate(int n,int arr[])
    {
        int sum[n];
        int total = 0;
        int first = arr[0];  
        int second = -1;     
        
        for(int i=0;i<n;i++)
        {
            total = total+arr[i];
        }

        for (int i = 1; i < n; i++) 
        {
            if (arr[i] > first) {
            second = first;
            first = arr[i];
            }  
        }
        for(int i=0;i<n;i++)
        {
            sum[i] = second-arr[i];
        }
        cout<<"The array is : "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<sum[i]<<" ";
        }
        cout<<endl;
        /*int temp=0;
        for(int i=0;i<n;i++)
        {
            temp = temp + sum[i];
        }
        int final;
        final= (total-temp)+1;
        //return final;
        cout<<"Final output is :"<<final;*/
        
        
    }
};
int main()
{
    int n;
    cout<<"Enter the n non-negative integers : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the heights of the :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"height = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    solution.calculate(n,arr);
    return 0;
}