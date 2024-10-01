#include<iostream>
using namespace std;
class Solution{
    public:
    void stock(int n,int arr[])
    {
        int temp[100];
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                continue;
            }
            else{
                temp[j++] = arr[i+1]- arr[i];
            }
        }
        int result=0;
        for(int i=0;i<j-1;i++)
        {
            result = result + temp[i];
        }
        cout<<"The maximum profit is : "<<result<<endl;
    }
    
};
int main()
{
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter prices in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"the prices array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    solution.stock(n,arr);
    return 0;
}

/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int result = 0;
        
        for(int i = 0; i < prices.size() - 1; i++) {
            
            if(prices[i] < prices[i+1]) {
                result += prices[i+1] - prices[i];
            }
        }
        
        return result;
    }
};*/