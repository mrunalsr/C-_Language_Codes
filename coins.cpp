#include <iostream>
using namespace std;

void calculateCoins(int amount) {
    int maxFiveCoins = amount / 5; // Maximum number of 5-rupee coins
    int remainingAmount;
    int numFiveCoins, numTwoCoins;

    // Try to find a solution by reducing the number of 5-rupee coins
    while (maxFiveCoins >= 0) {
        remainingAmount = amount - (maxFiveCoins * 5);
        
        // Check if the remaining amount can be fulfilled with 2-rupee coins
        if (remainingAmount % 2 == 0) {
            numFiveCoins = maxFiveCoins;
            numTwoCoins = remainingAmount / 2;
            cout << "Use " << numFiveCoins << " 5-rupee coins and " << numTwoCoins << " 2-rupee coins." << endl;
            return;
        }
        
        maxFiveCoins--; // Reduce the number of 5-rupee coins and try again
    }
    
    // If no solution is found
    cout << "It's not possible to fulfill the amount with the given coins." << endl;
}

int main() {
    int amount;
    cout << "Enter the amount to fulfill: ";
    cin >> amount;

    calculateCoins(amount);

    return 0;
}
