#include <iostream>

// Function to manually sort the marks array in descending order and keep track of original indices
void sort_marks(int marks[], int indices[], int n) {
    // Manual bubble sort to sort marks and indices in descending order
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (marks[j] < marks[j + 1]) {
                // Swap marks
                int temp_mark = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp_mark;
                // Swap corresponding indices
                int temp_index = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp_index;
            }
        }
    }
}

// Function to assign ranks based on the sorted marks
void assign_ranks(int marks[], int ranks[], int n) {
    int rank = 1; // Starting rank

    // Assign the first rank
    ranks[0] = rank;

    for (int i = 1; i < n; ++i) {
        if (marks[i] == marks[i - 1]) {
            // Same rank as the previous student if marks are equal
            ranks[i] = ranks[i - 1];
        } else {
            // Increment rank if marks are different
            ranks[i] = ++rank;
        }
    }
}

int main() {
    int n;

    std::cout << "Enter the number of students: ";
    std::cin >> n;

    int marks[n];
    int ranks[n];
    int indices[n];

    std::cout << "Enter the marks of the students: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> marks[i];
        indices[i] = i;  // Initialize indices array to keep track of original positions
    }

    // Sort the marks array and keep track of the original indices
    sort_marks(marks, indices, n);

    // Assign ranks based on the sorted marks
    assign_ranks(marks, ranks, n);

    // Create a new array to store ranks in the original order
    int original_order_ranks[n];
    for (int i = 0; i < n; ++i) {
        original_order_ranks[indices[i]] = ranks[i];
    }

    std::cout << "Marks\tRank" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << marks[i] << "\t" << original_order_ranks[indices[i]] << std::endl;
    }

    return 0;
}
