#include<iostream>
using namespace std;
class Solution{
    public:
    char kthCharacter(int k)
    {
        string str = "a";
        while(str.length() < k)
        {
            string newword;
            for(char ch : str)
            {
                if(ch == 'z')
                {
                    newword.push_back('a');
                }
                else{
                    newword.push_back(ch+1);
                }
            }
            str += newword;
        }
        return str[k-1];
    }

};
int main()
{
    int k;
    char result;
    cout<<"Enter the value of k : "<<endl;
    cin>>k;
    Solution solution;
    result = solution.kthCharacter(k);
    cout<<"The kth character is : "<<result<<endl;

    return 0;
}