#include<iostream>
using namespace std;
class Solution{
    public:
    string reversewords(string s)
    {
        int n = s.length();
        int k=0;
        string temp[100];
        string word= "";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i] == ' ')
            {   
                if(!word.empty())
                {
                    temp[k++] = word;
                    word="";
                }
            }
            else 
            {
                word = s[i] + word;  
            }
        }
        if (!word.empty()) {
            temp[k++] = word;
        }  
        string result ="";
        for (int i = 0; i < k; i++) {
            result += temp[i];
            if (i < k - 1) result += " ";  
        }
        return result;
        
        
    }

};
int main()
{
    string str;
    string result1;
    cout<<"Enter the string here : "<<endl;
    getline(cin,str);
    Solution solution;
    result1 = solution.reversewords(str);
    cout<<"The string is : "<<result1<<endl;

    return 0;
}