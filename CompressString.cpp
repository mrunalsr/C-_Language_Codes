#include <iostream>
#include <string>
using namespace std;

string compressString(const string &str) {
    int n = str.length();
    if (n == 0) {
        return ""; // Return an empty string if the input is empty
    }

    string compressed;
    int count = 1; // Initialize count of current character

    for (int i = 1; i < n; i++) {
        if (str[i] == str[i-1]) {
            count++; // Increment count if the same character is repeating
        } else {
            compressed += str[i-1]; // Append previous character
            compressed += to_string(count); // Append the count of the previous character
            count = 1; // Reset count for the new character
        }
    }

    // Append the last character and its count
    compressed += str[n-1];
    compressed += to_string(count);

    // Return the original string if the compressed version is not shorter
    return compressed.length() < str.length() ? compressed : str;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string result = compressString(str);
    cout << "Compressed string: " << result << endl;

    return 0;
}
