#include <iostream>
using namespace std;

string removeDuplicates(string str) {
    int n = str.length();
    if (n == 0) {
        return str; // Return the original string if it's empty
    }

    string result = "";
    bool found[256] = {false}; // Array to keep track of characters found in the string

    for (int i = 0; i < n; i++) {
        if (!found[(int)str[i]]) {
            result += str[i];
            found[(int)str[i]] = true; // Mark character as found
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string here: ";
    cin >> str;
    string result = removeDuplicates(str);
    cout << "The string without duplicates is: " << result << endl;
    return 0;
}
