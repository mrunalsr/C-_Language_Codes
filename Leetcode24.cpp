#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows : "<<endl;
    cin>>rows;
    int MAX_ROWS = 100;
    int MAX_COL = 100;
    int arr[MAX_ROWS][MAX_COL] = {0};

    for (int i = 0; i < rows; ++i) {
        arr[i][0] = 1;
        arr[i][i] =1;
        for(int j=1;j<i;j++)
        {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }

    }

    cout<<"[";
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
    cout<<"]"<<endl;

   
    return 0;
}