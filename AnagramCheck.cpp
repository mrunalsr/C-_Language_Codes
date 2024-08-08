#include <iostream>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // If lengths of both strings are not same, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    int count1[256] = {0}; // Array to store the count of characters in str1
    int count2[256] = {0}; // Array to store the count of characters in str2

    // Increment the count for each character in str1
    for (int i = 0; i < str1.length(); i++) {
        count1[(int)str1[i]]++;
    }

    // Increment the count for each character in str2
    for (int i = 0; i < str2.length(); i++) {
        count2[(int)str2[i]]++;
    }

    // Compare the count arrays
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams of each other." << endl;
    } else {
        cout << "The strings are not anagrams of each other." << endl;
    }

    return 0;
}
