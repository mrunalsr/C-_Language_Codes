#include<iostream>
using namespace std;
void substract(int  row1,int col1,int matrix1[][100],int row2,int col2,int matrix2[][100])
{
    int maxRows = max(row1,row2);
    int maxCol = max(col1,col2);
    int result[100][100] = {0};
    
    for(int i=0;i<maxRows;i++)
    {
        for(int j=0;j<maxCol;j++)
        {
            int value1 = (i<row1 && j< col1) ? matrix1[i][j] : 0;
            int value2 = (i < row2 && j < col2) ? matrix2[i][j] : 0;

            result[i][j] = value1-value2;
        }
    }
    cout<<"The matrix after substraction is : "<<endl;
    for(int i=0;i<maxRows;i++)
    {
        for(int j =0;j<maxCol;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row1,col1,row2,col2;
    cout<<"Enter the no of rows and columns in 1st matrix : "<<endl;
    cin>>row1>>col1;
    int matrix1[100][100];
    cout<<"Enter elements in the 1st matrix : "<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    cout<<"The 1st matrix is : "<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<"Enter the no of rows and columns in 2nd matrix : "<<endl;
    cin>>row2>>col2;
    int matrix2[100][100];
    cout<<"Enter elements in the 2nd matrix : "<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    cout<<"The 2nd matrix is : "<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    substract(row1,col1,matrix1,row2,col2,matrix2);
    return 0;
}