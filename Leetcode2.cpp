#include<iostream>
using namespace std;
bool checkpalindrome(string str)
{
    string reverse = str;
    int n = str.length();
    int left =0;
    int right = n-1;
    while(left<right)
    {
        char temp = reverse[left];
        reverse[left]= reverse[right];
        reverse[right] = temp;

        left++;
        right--;

    }
    if(reverse == str)
    {
        return true;
    }
    else{
        return false;
    }
    
}
int main()
{
    string str;
    bool result;
    cout<<"enter the string here : "<<endl;
    cin>>str;
    result = checkpalindrome(str);
    if(result == true)
    {
        cout<<"The given string is palindrome : "<<endl;
    }
    else{
        cout<<"No, it is not a plalindrome"<<endl;
    }
    return 0;
}