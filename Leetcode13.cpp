#include <iostream>
using namespace std;

string binaryAddition(string a, string b) {
    string result;
    int carry = 0;

    int n1 = a.length();
    int n2 = b.length();
    int maxLength = max(n1, n2);

    
    for (int i = 0; i < maxLength; i++) {
        
        int bitA = (i < n1) ? (a[n1 - 1 - i] - '0') : 0; 
        int bitB = (i < n2) ? (b[n2 - 1 - i] - '0') : 0; 
        
        int sum = bitA + bitB + carry;

        
        result = char((sum % 2) + '0') + result; 

        
        carry = sum / 2; 
    }

    
    if (carry) {
        result = '1' + result; 
    }

    return result;
}

int main() {
    string a, b;
    string result1;
    cout << "Enter the binary strings a and b: " << endl;
    cin >> a >> b;
    result1 = binaryAddition(a, b);
    cout<<"The result is : "<<result1<<endl;
    return 0;
}





/*
#include <iostream>
using namespace std;

void binaryAddition(string a, string b) {
    // Ensure both strings are the same length by padding with zeros
    int n1 = a.length();
    int n2 = b.length();
    
    // Pad the shorter string with zeros at the front
    while (n1 < n2) {
        a = '0' + a; // Prepend '0' to a
        n1++;
    }
    while (n2 < n1) {
        b = '0' + b; // Prepend '0' to b
        n2++;
    }

    string result;
    int carry = 0;

    // Perform binary addition from the last digit to the first
    for (int i = n1 - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry; // Convert char to int and add
        
        // Calculate the new digit and carry
        result = (sum % 2) + '0' + result; // Append the binary result at the beginning
        carry = sum / 2; // Update carry for next iteration
    }

    // If there's a carry left after the last addition, add it
    if (carry) {
        result = '1' + result; // Prepend '1' to result
    }

    cout << "The result of binary addition is: " << result << endl;
}

int main() {
    string a, b;
    cout << "Enter the binary strings a and b: " << endl;
    cin >> a >> b;
    binaryAddition(a, b);
    return 0;
}
*/