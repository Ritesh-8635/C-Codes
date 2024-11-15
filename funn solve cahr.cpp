#include <stdio.h>

void solve() {
    // Initialize a character array with 10 characters
    char ch[] = "abcdefghij";
    
    // Initialize the result variable
    int ans = 0;

    // Loop through each character in the array
    for (int i = 0; i < 10; i++) {
        // Calculate the position of the character in the alphabet (0-based)
        int position = *(ch + i) - 'a';

        // Add the position to the result
        ans += position;
    }

    // Print the result
    printf("%d\n", ans);
}

int main() {
    // Call the solve function
    solve();

    // End the program
    return 0;
}

