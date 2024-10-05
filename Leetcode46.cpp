#include<iostream>
using namespace std;
class Solution{
    public:
    string roman(int num)
    {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
        string result = "";
        for (int i = 0; i < 13; i++) {
            while (num >= values[i]) {
                result += numerals[i];
                num -= values[i];
            }
        }
        return result;
        
    }

};
int main()
{
    int num;
    string result1;
    cout<<"enter the number here : "<<endl;
    cin>>num;
    Solution solution;
    result1=solution.roman(num);
    cout<<"The inter in roman is : "<<result1<<endl;
    return 0;
}