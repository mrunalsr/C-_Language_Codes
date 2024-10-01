#include<iostream>
using namespace std;
class Solution{
    public:
    void jump(int n,int arr[])
    {
        for(int i=0;i<n;i++)
        {
            
        }
    }

};
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the length of jumps : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array of jumps :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Solution solution;
    solution.jump(n,arr);
    
}