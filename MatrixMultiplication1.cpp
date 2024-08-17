#include<iostream>
using namespace std;
void Multiply(int row1,int col1, int matrix1[][100],int row2,int col2,int matrix2[][100])
{
    if(col1 != row2)
    {
        cout<<"Matrix multiplication not possible due to incompatible dimension."<<endl;
        return;
    }

    int result[100][100] = {0};

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            for(int k =0;k<col1;k++)
            {
                result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    cout<<"the resultant matrix after multiplication is : "<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row1,col1,row2,col2;
    cout<<"enter the no of rows and columns in the matrix : "<<endl;
    cin>>row1>>col1;
    int matrix1[100][100];
    cout<<"enter the elements in this matrix :"<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the no of rows and columns in the matrix : "<<endl;
    cin>>row2>>col2;
    int matrix2[100][100];
    cout<<"enter the elements in this matrix :"<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    Multiply(row1,col1,matrix1,row2,col2,matrix2);
    return 0;
}