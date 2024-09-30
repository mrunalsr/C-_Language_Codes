#include<iostream>
using namespace std;
int pick;

int guess(int num)
{
    if(num > pick) return -1;
    if(num < pick) return 1;
    return 0;
}
class Solution{
    public:
    int guessNumber(int n){
        int low =1,high = n;
        while(low<=high){
            int mid = low+ (high-low)/2;
            int res = guess(mid);
             
            if(res == 0)
            {
                return mid;
            }
            else if(res == -1)
            {
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }
        }
        return -1;
    }
};

int main()
{
    cout<<"enter the value of pick : "<<endl;
    cin>>pick;
    Solution solution;
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"The guessed number is : "<<solution.guessNumber(n)<<endl;
   return 0; 
    
}