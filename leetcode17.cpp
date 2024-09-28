#include<iostream>
#include<cctype>
using namespace std;
bool ispalindrome(string str)
{
    string cleaned;
    for(char ch : str)
    {
        if(isalnum(ch)){
            cleaned += tolower(ch);
        }

    }
    int left=0;
    int right = cleaned.length() -1;
    while(left<right)
    {
        if(cleaned[left] != cleaned[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string str;
    bool result ;
    cout<<"Enter the string here : "<<endl;
    getline(cin,str);
    cout<<endl;
    ispalindrome(str);
    
    return 0;
}