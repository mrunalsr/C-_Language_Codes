#include<iostream>
using namespace std;
void substract(int size,int matrix1[][100],int matrix2[][100])
{
    int result[100][100];
    for(int i=0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            result[i][j] = matrix1[i][j]-matrix2[i][j];
        }
    }
    cout<<"The substraction of the array : "<<endl;
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
    int size1,size2;
    cout<<"Enter the size of 1st square matrix : "<<endl;
    cin>>size1;
    int matrix1[100][100];
    cout<<"Enter elements in the matrix rwo-wise : "<<endl;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size1;j++)
        {
            cin>>matrix1[i][j];
        }
    }

    cout<<"The matrix is : "<<endl;
    for(int i=0;i<size1;i++)
    {
        for(int j =0;j<size1;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the size of 2nd array : "<<endl;
    cin>>size2;
    int matrix2[100][100];
    cout<<"enter the elements in the array in the : "<<endl;
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size2;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<size2;i++)
    {
        for(int j =0;j<size2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    substract(size1,matrix1,matrix2);

    return 0;
}