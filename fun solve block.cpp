#include <stdio.h>

void solve() {
    // Initialize variables first and second
    int first = 10;
    int second = 20;

    // Calculate third as the sum of first and second
    int third = first + second;  // third = 30

    // Start a new block with its own scope
    {
        // Initialize a new third variable with a different scope
        int third = second - first;  // third = 10

        // Print the value of the new third
        printf("%d\n", third);  // This prints 10
    }  // End of the new block, the outer third is still 30

    // Print the value of the outer third
    printf("%d\n", third);  // This prints 30
}

int main() {
    // Call the solve function
    solve();
    
    // End the program
    return 0;
}

