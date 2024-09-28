#include<iostream>
using namespace std;
int profit(int n,int arr[])
{
    if(n<2){
        cout<<"Not enough to calculate profit"<<endl;
        return 0;
    }
    int minprice = arr[0];
    int maxprofit = 0;
    int profit=0;
    for(int i=1;i<n;i++)
    {
        profit = arr[i] - minprice;
    
        if(profit>maxprofit)
        {
            maxprofit = profit;
        }
        if(arr[i] < minprice){
            minprice = arr[i];
        }
    }
    return maxprofit;
    
}
int main()
{
    int n;
    int result;
    cout<<"Enter the no of days : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the prices of each day : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The prices of the days are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    result=profit(n,arr);
    cout<<"The maximum profit is on the day of price : "<<result<<endl;
    return 0;
}



/*int arr1[n-1];
    
    int index=0;
    for(int i=0;i<n;i++)
    {
        arr1[i] = arr[i+1] - arr[i]; 
    }
    int temp = arr1[0];
    for(int i=1;i<n-1;i++)
    {
        if(arr1[i] > temp)
        {
            temp = arr1[i];
            index=i;
        }
        
    }
    cout<<"The price corresponding to maximum profit is : "<<arr[index+1]<<endl;
    */