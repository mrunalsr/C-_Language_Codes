//Longest common prefix in given string array
#include<iostream>
using namespace std;
string commonprefix(int n, string str[])
{
    if(n==0)
    return "";
    if(n==1)
    return str[0];
    string prefix = str[0];
    for(int i=1;i<n;i++)
    {
        int j = 0;
        while(j<prefix.length() & j<str[i].length() && prefix[j] == str[i][j])
        {
            j++;
        }
        prefix = prefix.substr(0,j);  //update the common part
        if(prefix == "")
        break;
       
    }
    return prefix;

}
int main()
{
    int n;
    string result;
    cout<<"enter the no of elements in the array : "<<endl;
    cin>>n;
    string str[n];
    cout<<"enter the string in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<endl;
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    result = commonprefix(n,str);
    cout<<"The longest common prefix in all string is : "<<result;
    return 0;
}