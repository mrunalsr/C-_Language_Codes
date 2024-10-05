#include<iostream>
#include<bitset>
using namespace std;
class Solution{
    public:
    void convertDateToBinary(string date)
    {
        int n = date.length();
        int num =0;
        for(int i=0;i<n;i++)
        {
            if(date[i] !=0)
            {
                num = num* 10 + (date[i] - '0');
            }  
        }
        
        cout<<"check here "<<bitset<32>(num)<<endl;
    }

};
int main()
{
    string date;
    cout<<"Enter the date in the format YYYY-MM-DD : "<<endl;
    cin>>date;
    Solution solution;
    solution.convertDateToBinary(date);
    return 0;
}


/*#include<iostream>
using namespace std;

class Solution{
    public:
    void convertDateToBinary(string date)
    {
        // Extract year, month, and day from the date string
        string year = date.substr(0, 4);     // Extract the year part (YYYY)
        string month = date.substr(5, 2);    // Extract the month part (MM)
        string day = date.substr(8, 2);      // Extract the day part (DD)

        // Convert the extracted year, month, and day strings to integers
        int yearInt = stringToInt(year);
        int monthInt = stringToInt(month);
        int dayInt = stringToInt(day);

        // Print the binary representation of year, month, and day
        cout << "Year in binary: " << toBinary(yearInt) << endl;
        cout << "Month in binary: " << toBinary(monthInt) << endl;
        cout << "Day in binary: " << toBinary(dayInt) << endl;
    }

    // Helper function to convert string to integer without using inbuilt functions
    int stringToInt(string str) {
        int num = 0;
        for (int i = 0; i < str.length(); i++) {
            num = num * 10 + (str[i] - '0'); // Convert character to integer
        }
        return num;
    }

    // Helper function to convert an integer to binary without inbuilt functions
    string toBinary(int num) {
        string binary = "";
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        return binary.empty() ? "0" : binary;  // Return "0" if num is 0
    }
};

int main()
{
    string date;
    cout << "Enter the date in the format YYYY-MM-DD: " << endl;
    cin >> date;

    Solution solution;
    solution.convertDateToBinary(date);

    return 0;
}
*/