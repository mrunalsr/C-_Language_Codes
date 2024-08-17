#include<iostream>
using namespace std;
void Multiply(int size,int matrix1[][100],int matrix2[][100])
{
    int result[100][100];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           for(int k =0;k<size;k++)
           {
                result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
           }
        }
    }
    cout<<"The result of matrix : "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of square matrix : "<<endl;
    cin>>size;
    int matrix1[100][100];
    cout<<"Enter the elements of 1st matrix : "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    cout<<"the matrix is : "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            for(int j = 0;j<size;j++)
            {
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    int matrix2[100][100];
    cout<<"Enter the elements of 2nd matrix : "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    cout<<"the matrix is : "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            for(int j = 0;j<size;j++)
            {
                cout<<matrix2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Multiply(size,matrix1,matrix2);
    return 0;
}