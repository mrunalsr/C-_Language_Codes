#include<iostream>
using namespace std;
void mergearray(int n1,int n2,int arr1[],int arr2[])
{
    int size = n1+n2;
    int mergearr[size];
    cout<<"sorting first array : "<<endl;
    for(int i=0;i<n1-1;i++)
    {
        for(int j=0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    cout<<"Sorting second array : "<<endl;
    for(int i=0;i<n2-1;i++)
    {
        for(int j=0;j<n2-i-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            mergearr[k++] = arr1[i++];
        }
        else
        {
            mergearr[k++] = arr2[j++];
        }
    }
    while(i<n1)
    {
        mergearr[k++] = arr1[i++];
    }
    while(j<n1)
    {
        mergearr[k++]= arr2[j++];
    }

    cout<<"The merged array is : "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<mergearr[i]<<" ";
    }
    


}
int main()
{
    int n1,n2;
    cout<<"Enter the size of first array : "<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"enter elements in the first array :  "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array : "<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"enter elements in the first array :  "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    cout<<"The first array is  are : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"The first array is  are : "<<endl;
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i];
    }
    cout<<endl;
    mergearray(n1,n2,arr1,arr2);
    return 0;
}
