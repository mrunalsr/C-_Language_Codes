#include<iostream>
using namespace std;
class Solution{
    public:
    int temp[100];
    int k=0;
    void disappeared(int n,int arr[])
    {
       for(int i=0;i<n-1;i++)
       {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] != arr[i+1])
            {
                temp[k++] = arr[i];
            }
        }
        int temp1[100];
        for(int i=0;i<k;i++)
        {
            if(arr[i] != i+1)
            {
                temp1[k++] = i+1;
            }
        }
        cout<<"The array after every process"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<temp[i]<<" ";
        }
    }
};
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    solution.disappeared(n,arr);
    return 0;
}