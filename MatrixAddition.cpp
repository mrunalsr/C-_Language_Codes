#include<iostream>
using namespace std;
void MatrixAdd(int size,int arr[][100],int arr1[][100])
{
    int result[100][100];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            result[i][j] = arr[i][j]+arr1[i][j];
        }
    }
    cout<<"The array  is : "<<endl;
    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int size1;
    cout<<"Enter the size of 1st square matrix : "<<endl;
    cin>>size1;
    int arr[100][100];
    cout<<"Enter eleemnts in the matrix row-wise : "<<endl;
    for(int i=0;i<size1;i++)
    {
        for(int j = 0;j<size1;j++)
        {
            cin>>arr[i][j];
        }
       
    }
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size1;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
        
    }

    int size2;
    cout<<"Enter the size of 2nd square matrix : "<<endl;
    cin>>size2;
    int arr1[100][100];
    cout<<"Enter eleemnts in the matrix row-wise : "<<endl;
    for(int i=0;i<size2;i++)
    {
        for(int j = 0;j<size2;j++)
        {
            cin>>arr1[i][j];
        }
       
    }
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size2;j++)
        {
            cout<<arr1[i][j]<<" ";

        }
        cout<<endl;
        
    }
    if(size1 == size2)
    {
        MatrixAdd(size1,arr,arr1);
    }
    else{
        cout<<"Matrices must be of the same size to be added."<<endl;
    }
    return 0;
}