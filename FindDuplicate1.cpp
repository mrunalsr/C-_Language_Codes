#include<iostream>
using namespace std;
void duplicate(int arr[],int n)
{
    int duplicate[n];
    int duplicatecount = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                bool alreadyadded = false;
                for(int k =0;k<duplicatecount;k++)
                {
                    if(duplicate[k] == arr[i])
                    {
                        alreadyadded = true;
                        break;
                    }
                }
                if(!alreadyadded)
                {
                    duplicate[duplicatecount++] = arr[i];
                }
            }
            
        }
    }
    if(duplicatecount > 0)
    {
        cout<<"Duplicate elements are : "<<endl;
        for(int i=0;i<duplicatecount;i++)
        {
            cout<<duplicate[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"No duplicate found"<<endl;
    }
    
}
int main()
{
    int n;
    int result;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    duplicate(arr,n);
    
    return 0;
}