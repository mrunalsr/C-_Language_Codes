#include<iostream>
using namespace std;
void sneakyelement(int n,int arr[])
{
    int arr1[2];
    int count[n] = {0};
    
    for(int i=0;i<n;i++)
    {
       count[arr[i]]++;
    }
    int index = 0;
    for(int i=0;i<n;i++)
    {
        if(count[i] == 2){
            arr1[index++] = i;
            if(index == 2) break;
        }
    }
    cout<<arr1[0]<<" "<<arr1[1]<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements here : "<<endl;
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
    sneakyelement(n,arr);
    return 0;
}