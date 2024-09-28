#include<iostream>
using namespace std;
string convertToTitle(int columnno)
{
    char title[100];
    int index = 0;
    string result;
    while(columnno > 0)
    {
        columnno--;
        int remainder = columnno % 26;
        title[index++] = 'A' + remainder;
        columnno /= 26;
    }
    for(int i=index-1;i>=0;i--)
    {
       result += title[i];
    }
    
    return result;
}
int main()
{
    int columnno;
    string result;
    cout<<"Enter the column number : "<<endl;
    cin>>columnno;
    result = convertToTitle(columnno);
    cout<<"The resulting string is : "<<result<<endl;

    return 0;
}