#include<iostream>
using namespace std;
void merge(int n1,int n2,int arr1[],int arr2[])
{
    int i=0,j=0,k=0;
    int size = n1+n2;
    int merged[size];
    
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else{
            merged[k++] = arr2[j++];
        }
    }
    while(i<n1)
    {
        merged[k++] = arr1[i++];
    }
    while(j<n2)
    {
        merged[k++] = arr2[j++];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(merged[j]>merged[j+1])
            {
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    cout<<"The merged array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<merged[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n1,n2;
    cout<<"Enter the value of n1 and n2"<<endl;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter elements in the 1st array :"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements in the 2nd array :"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr2[i];
    }
    merge(n1,n2,arr1,arr2);

    return 0;
}


