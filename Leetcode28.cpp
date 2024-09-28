#include<iostream>
using namespace std;
bool duplicate(int n,int arr[])
{
   int k;
   cout<<"enter value of k : "<<endl;
   cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] && abs(i-j) <= k)
            {
                return true;
            }
        }
    }
    return false;
    
}
int main()
{
    int n;
    bool result;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    result = duplicate(n,arr);
    if(result == true)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}