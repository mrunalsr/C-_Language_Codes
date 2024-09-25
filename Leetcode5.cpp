#include<iostream>
using namespace std;
bool check(string str)
{
    int n = str.length();
    int left =0;
    int right = n-1;
    while(left<right)
    {
        if(str[left] == '(' && left+1 <n && str[left+1] == ')')
        {
            return true;
            left++;
        }
        else if(str[left]== '[' && left+1<n && str[left+1] == ']')
        {
            return true;
            left++;
        }
        else if(str[left] == '{' && left+1 <n && str[left+1] == '}')
        {
            return true;
            left++;
        }
        else{
            return false;
        }
    }
}
int main()
{
    string str;
    bool result;
    cout<<"Enter the input string :"<<endl;
    cin>>str;
    result = check(str);
    if(result == true)
    {
        cout<<"The string contain correct paranthesis"<<endl;
    }
    else{
        cout<<"The string not contain correct paranthesis"<<endl;
    }
    return 0;
}