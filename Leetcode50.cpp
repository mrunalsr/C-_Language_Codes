#include<iostream>
using namespace std;
class Solution{
    public:
    int arrangeCoins(int n)
    {
        int row = 1;
        int count = 0;
        while(row<n)
        {
            n = n-row;
            count++;
            row++;     
        }
        return count; 
    }

};
int main()
{
    int n;
    int result;
    cout<<"enter the number of coins :  "<<endl;
    cin>>n;
    Solution solution;
    result = solution.arrangeCoins(n);
    cout<<"The result is : "<<result<<endl;
    return 0;
}