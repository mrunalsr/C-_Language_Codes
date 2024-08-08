#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string &str1, const string &str2) {
    // Check if lengths are different
    if (str1.length() != str2.length()) {
        return false;
    }

    // Concatenate str1 with itself
    string concatenated = str1 + str1;

    // Check if str2 is a substring of the concatenated string
    return concatenated.find(str2) != string::npos;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (isRotation(str1, str2)) {
        cout << "The second string is a rotation of the first string." << endl;
    } else {
        cout << "The second string is not a rotation of the first string." << endl;
    }

    return 0;
}
