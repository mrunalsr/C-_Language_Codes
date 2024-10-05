#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int generateKey(int num1,int num2,int num3)
    {
        string l1 = to_string(num1);
        string l2 = to_string(num2);
        string l3 = to_string(num3);
        
        l1.insert(0,4-l1.length(),'0');
        l2.insert(0,4-l2.length(),'0');
        l3.insert(0,4-l3.length(),'0');

        string key;
        for(int i=0;i<4;i++)
        {
            char minDigit = min({l1[i],l2[i],l3[i]});
            key += minDigit;
        }
        int finalKey = stoi(key);
        return finalKey;
    }

};
int main()
{
    int num1,num2,num3;
    int result;
    cout<<"Enter the values of num1,num2,num3 :"<<endl;
    cin>>num1>>num2>>num3;
    Solution solution;
    result = solution.generateKey(num1,num2,num3);
    cout<<"The result is : "<<result<<endl;
    return 0;
}