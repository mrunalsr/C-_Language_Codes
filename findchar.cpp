#include <iostream>
using namespace std;

char findFirstNonRepeatedChar(const string &str) {
    int n = str.length();
    
    // Iterate through each character in the string
    for (int i = 0; i < n; i++) {
        char currentChar = str[i];
        bool isRepeated = false;

        // Check if the current character is repeated
        for (int j = 0; j < n; j++) {
            if (i != j && str[j] == currentChar) {
                isRepeated = true;
                break;
            }
        }

        // If current character is not repeated, return it
        if (!isRepeated) {
            return currentChar;
        }
    }

    // Return a special character if no non-repeated character is found
    return '\0';
}

int main() {
    string str;
    char result;
    cout << "Enter the string here: " << endl;
    cin >> str;

    result = findFirstNonRepeatedChar(str);
    if (result != '\0') {
        cout << "The first non-repeated character is: " << result << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }

    return 0;
}
