#include<iostream>
using namespace std;
bool duplicate(int n,int arr[])
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        if(temp == arr[i])
        {
            return true;
            
        }
        
    }
    return false;
}
int main()
{
    int n;
    bool result = false;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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