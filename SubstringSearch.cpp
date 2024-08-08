#include <iostream>
#include <string>
using namespace std;

int naiveSubstringSearch(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();

    // Loop through each position in the main string
    for (int i = 0; i <= n - m; i++) {
        int j;
        // Check if the substring starting at position i matches the pattern
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break; // Mismatch found, break out of the loop
            }
        }
        // If all characters matched
        if (j == m) {
            return i; // Return the starting index of the match
        }
    }
    return -1; // Return -1 if no match is found
}

int main() {
    string text, pattern;
    cout << "Enter the main string: ";
    cin >> text;
    cout << "Enter the substring to search: ";
    cin >> pattern;

    int index = naiveSubstringSearch(text, pattern);
    if (index != -1) {
        cout << "Substring found at index: " << index << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    return 0;
}
