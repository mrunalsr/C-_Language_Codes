#include<iostream>
using namespace std;
string check(string str,string str1)
{
    int n = str.length();
    int n1 = str1.length();
    string str2;
    
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(str[i] == str[j])
            {
                str2 += str[i];
                
            }
        }
    }
    return str2;

    
}
int main()
{
    string str;
    string str1;
    string result;
    cout<<"Enter haystack string here : "<<endl;
    cin>>str;
    cout<<"Enter needle string here : "<<endl;
    cin>>str1;
    result = check(str,str1);
    cout<<"The string is : "<<result;
    return 0;
}