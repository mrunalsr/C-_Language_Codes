/*#include<iostream>
using namespace std;
class Solution{
    public:
    int hammingdistance(int x,int y)
    {
        int temp[32];
        int temp1[32];
        int count=0;
        int i= 0,j=0;
        while(x>0)
        {
            temp[i] = x%2;
            x = x/2;
            i++;
        }
        while(y>0)
        {
            temp1[j] = y%2;
            y = y/2;
            i++;
        }
        while (i < 32) {
            temp[i] = 0;
            i++;
        }
        while (j < 32) {
            temp1[j] = 0;
            j++;
        }
        cout << "Binary of first number: ";
        for (int k = 31; k >= 0; k--) {
            cout << temp[k];
        }
        cout << endl;
        cout << "Binary of second number: ";
        for (int k = 31; k >= 0; k--) {
            cout << temp1[k];
        }
        cout << endl; 
        for (int k = 0; k < 32; k++) {
            if (temp[k] != temp1[k]) {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    int x,y;
    int result;
    cout<<"Enter the values of x and y : "<<endl;
    cin>>x>>y;
    Solution solution;
    result = solution.hammingdistance(x,y);
    cout<<"The hamming distance between them is : "<<result<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_result = x ^ y;  
        int count = 0;
        while (xor_result > 0) {
            if (xor_result % 2 == 1) {  
                count++;
            }
            xor_result = xor_result / 2;  
        }
        return count;
    }
};

int main() {
    int x, y;
    cout << "Enter the values of x and y: " << endl;
    cin >> x >> y;

    Solution solution;
    int result = solution.hammingDistance(x, y);
    cout << "The Hamming distance between them is: " << result << endl;

    return 0;
}
