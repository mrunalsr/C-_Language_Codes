#include<iostream>
using namespace std;
class Solution{
    public:
    bool repeatedsubstringpattern(string s)
    {
        int n = s.length();
        for(int i=1;i<=n/2;i++)
        {
            if(n%i == 0)
            {
                bool ispattern = true;
                for(int j =i;j<n;j++)
                {
                    if(s[j] != s[j %i])
                    {
                        ispattern = false;
                        break;
                    }
                }
                if(ispattern){
                    return true;

                }
            }
        }
        return false;
    }

};
int main()
{
    string str;
    bool result;
    cout<<"enter the string here : "<<endl;
    cin>>str;
    Solution solution;
    result = solution.repeatedsubstringpattern(str);
    if(result == true)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}