#include<iostream>
using namespace std;
int lastwordlength(string str)
{
    int n = str.length();
    cout<<n<<endl;
    int length = 0;
    bool foundchar = false; ;
    for(int i = n-1;i>=0;i--)
    { 
        if(str[i] == ' ')
        {
            if(foundchar)
            {
                break;
            }
            
        }
        else{
            foundchar = true;
            length++;
            
        }
    }
    return length;
}
int main()
{
    string str;
    int result ;
    cout<<"Enter the string here : "<<endl;
    getline(cin,str);
    result = lastwordlength(str);
    cout<<"The result is : "<<result<<endl;
    return 0;
}