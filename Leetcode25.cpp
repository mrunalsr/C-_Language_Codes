#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows : "<<endl;
    cin>>rows;
    int maxrows = 100;
    int maxcol = 100;
    int arr[maxrows][maxcol] = {0};
    int rowIndex;

    for(int i=0;i<rows;i++)
    {
        arr[i][0] =1;
        arr[i][i] =1;
        for(int j=1;j<i;j++)
        {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
        
    }
    cout<<"Enter the row index you want to display : "<<endl;
    cin>>rowIndex;
    if(rowIndex >= 0 && rowIndex < rows){
        cout<<"[";
        for(int j=0;j<=rowIndex;j++)
        {
            cout<<arr[rowIndex][j];
            if(j<rowIndex){
                cout<<",";
            }
        }
        cout<<"]"<<endl;
    }else{
        cout<<"Invalid row index"<<endl;
    }

    /*cout<<"[";
    for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<=i;j++)
        {
            cout<<arr[i][j];
            if(j<i){
                cout<<",";
            }
        }
        cout<<"]";
        if(i<rows-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;*/

    return 0;
}