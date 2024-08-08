#include <iostream>
using namespace std;
string CheckPalindrome(string &str)
{
    string str1 = str;
    int n = str1.length();

    int left = 0;
    int right = n - 1;

    int temp = str1[left];
    str1[left] = str1[right];
    str1[right] = temp;

    left++;
    right--;

    if (str1 == str)
    {
        return "Yes the given string is a palindrome";
    }
    else
    {
        return "It is not a palindrome";
    }
}
int main()
{
    string str, result;
    cout << "Enter the number here : " << endl;
    cin >> str;

    result = CheckPalindrome(str);
    cout << result << endl;
    return 0;
}