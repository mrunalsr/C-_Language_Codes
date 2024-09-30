#include<iostream>
using namespace std;
void intersection(int n1,int n2,int arr1[],int arr2[])
{
    int size = n1+n2;
    int temp[size];
    
    int k=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i] == arr2[j])
            {
                temp[k++] = arr1[i];
                break;
            }
        }
    }
   
    cout<<"The result array is :"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int n1,n2;
    cout<<"enter the sizes of two arrays : "<<endl;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the elemnts in the second array : "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    intersection(n1,n2,arr1,arr2);
    return 0;
}

