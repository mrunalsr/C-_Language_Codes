#include<iostream>
using namespace std;
string Reverse(string &str)
{
    string reversestr = str;
    int n = reversestr.length();

    int left = 0;
    int right = n-1;

    while(left<right){
        char temp = reversestr[left];
        reversestr[left] = reversestr[right];
        reversestr[right] = temp;

        left++;
        right--;
    }
    return reversestr;
}
int main()
{
    string str1;
    string result;
    cout<<"Enter the string here : "<<endl;
    cin>>str1;
    cout<<"Your entered string is : "<<str1<<endl;

    result = Reverse(str1);
    cout<<"Reversed string is : "<<result;

    return 0;
}