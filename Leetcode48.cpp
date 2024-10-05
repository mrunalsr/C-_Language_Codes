#include<iostream>
using namespace std;
class Solution{
    public:
    void zigzag(string s,int rows)
    {
        int n = s.length();
        int row = rows;
        int col = n/2;
        string arr[row][col];
        for(int i=0;i<row;i++)
        {    
            for(int j=0;j<col;j++)
            {      
                for(int k=1;k<n;k++)
                {
                    arr[0][0] = s[0];
                    if(k % 4 ==0 && k<n/2)
                    {     
                        arr[i][j+2] = s[k];
                    }
                }   
            }
        }
        cout<<"The array is :"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j];
            }
        }
    }

};
int main()
{
    string str;
    int rows;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    cout<<"enter the number of rows : "<<endl;
    cin>>rows;
    Solution solution;
    solution.zigzag(str,rows);
    return 0;
}


/*for(int k=1;k<n;k++)
                {
                    if(k %2 == 1)
                    {
                        arr[i] = s[k];
                    //cout<<arr[i][j]<<" ";
                    }
                    else if(k>col)
                    {
                        break;
                    }
                }*/


/*
#include <iostream>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // Handle special cases
        if (numRows == 1 || numRows >= s.length()) {
            return s; // No zigzag needed if rows are 1 or greater than the length of the string
        }

        // Create an array of strings to represent each row
        string arr[numRows];

        // Variables to keep track of the current row and direction
        int currRow = 0;
        bool goingDown = false;

        // Traverse the input string and place characters in zigzag manner
        for (char c : s) {
            arr[currRow] += c; // Add character to the current row

            // Change direction when reaching the top or bottom row
            if (currRow == 0 || currRow == numRows - 1) {
                goingDown = !goingDown; // Toggle direction
            }

            // Move to the next row depending on the direction
            currRow += goingDown ? 1 : -1;
        }

        // Concatenate all rows to get the final zigzag string
        string result;
        for (int i = 0; i < numRows; ++i) {
            result += arr[i];
        }

        return result; // Return the final zigzag string
    }
};

int main() {
    string str;
    int rows;

    cout << "Enter the string: " << endl;
    getline(cin, str); // Use getline to allow spaces in the input

    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    Solution solution;
    string result = solution.convert(str, rows);

    cout << "The zigzag conversion is: " << result << endl;

    return 0;
}
*/