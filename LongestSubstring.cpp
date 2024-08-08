#include <iostream>
#include <string>
using namespace std;

string longestRepeatingSubstring(string str) {
    int n = str.length();
    if (n == 0) {
        return ""; // Return an empty string if the input is empty
    }

    int maxLen = 1; // Maximum length of the longest repeating substring
    int currentLen = 1; // Length of the current repeating substring
    char maxChar = str[0]; // Character of the longest repeating substring
    char currentChar = str[0]; // Current character being processed

    for (int i = 1; i < n; i++) {
        if (str[i] == str[i-1]) {
            currentLen++; // Increment the length of the current repeating substring
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxChar = currentChar;
            }
            currentChar = str[i]; // Update the current character
            currentLen = 1; // Reset the current length
        }
    }

    // Check the last repeating substring
    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxChar = currentChar;
    }

    // Create the longest repeating substring
    string longestSubstring(maxLen, maxChar);
    return longestSubstring;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string result = longestRepeatingSubstring(str);
    cout << "The longest substring with repeating characters is: " << result << endl;

    return 0;
}
