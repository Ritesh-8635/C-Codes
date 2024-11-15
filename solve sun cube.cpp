#include <stdio.h>

// Define a macro CUBE(x) as x * x * x
#define CUBE(x) ((x) * (x) * (x))

void solve() {
    // Calculate the cube of 3 using the macro CUBE
    int cubeOf3 = CUBE(3);
    
    // Compute the value of ans by dividing 216 by the cube of 3
    int ans = 216 / cubeOf3;
    
    // Print the value of ans
    printf("%d\n", ans);
}

int main() {
    // Call the solve function
    solve();
    
    // End the program
    return 0;
}

