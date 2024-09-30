#include<iostream>
using namespace std;
void Rangesum(int n,int arr[])
{
    int left;
    int right;
    int total=0;
    cout<<"Enter the range :"<<endl;
    cin>>left>>right;
    if(right >n)
    {
        cout<<"This is invalid range "<<endl;
    }
    for(int i=left;i<=right;i++)
    {
        total = total + arr[i];
    }
    cout<<"The sum of the range given is : "<<total<<endl;
}
int main()

{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int NumArray[n];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>NumArray[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<NumArray[i]<<" ";
    }
    cout<<endl;
    Rangesum(n,NumArray);
    return 0;
}


