#include<iostream>
#include<sstream>
using namespace std;
class Solution{
    public:
    int countsegment(string s)
    {
        int n = s.length();
        stringstream ss(s);
        string word, result;
        bool firstword = true;
        while(ss >> word){
            if(!firstword){
                result += " ";
            }
            result += word;
            firstword = false;
        }
        if(result == "")
        {
            return 0;
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(result[i] == ' ')
            {
                count++;   
            }   
        }
        
        return count+1;

    }

};
int main()
{
    string str;
    int result;
    getline(cin,str);
    cout<<"The given string is : "<<str<<endl;
    Solution solution;
    result = solution.countsegment(str);
    cout<<"The total count of words is : "<<result<<endl;

    return 0;
}