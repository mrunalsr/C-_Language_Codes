#include<iostream>
using namespace std;
void MatrixAdd(int row1,int col1,int arr[][100],int row2,int col2,int arr1[][100])
{
    int maxRows = (row1 > row2) ? row1 : row2;
    int maxCol = (col1 > col2) ? col1 : col2;

    int result[100][100] ={0};
    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<col1;j++)
        {
            result[i][j] = result[i][j]+arr[i][j];
        }
    }
    for(int i=0;i<row2;i++)
    {
        for(int j = 0;j<col2;j++)
        {
            result[i][j]= result[i][j]+arr1[i][j];
        }
        cout<<endl;
    }

    cout<<"The resultant matrix is  : "<<endl;
    for(int i =0;i<maxRows;i++)
    {
        for(int j=0;j<maxCol;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row1,row2;
    int col1,col2;
    cout<<"Enter the no of rows and columns in the matrix : "<<endl;
    cin>>row1>>col1;
    int arr[100][100];
    cout<<"Enter elements in the matrix"<<endl;
    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<col1;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Enter the no of rows and columns in the matrix : "<<endl;
    cin>>row2>>col2;
    int arr1[100][100];
    cout<<"Enter elements in the matrix"<<endl;
    for(int i =0;i<row2;i++)
    {
        for(int j =0;j<col2;j++)
        {
            cin>>arr1[i][j];
        }
    }

    MatrixAdd(row1,col1,arr,row2,col2,arr1);



    return 0;
}