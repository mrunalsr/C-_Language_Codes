#include<iostream>
using namespace std;
string uppercase(string &str)
{
    string str1 = str;
    int n = str1.length();
    int middle = n/2;
    
    //str1[middle] = toupper(str1[middle]);
    str1[middle] = str1[middle]-32;
    return str1;
}
int main()
{
    string str;
    string result;
    cout<<"enter the string here : "<<endl;
    cin>>str;
    result = uppercase(str);
    cout<<"The string is "<<result;
    return 0;
}