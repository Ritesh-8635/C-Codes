#include <stdio.h>

// Function to swap the values of two variables
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to solve the problem
void solve(int a,int b) {
    int z=a;
    int y=b;

    // Call the swap function to swap the values of a and b
    swap(&a, &b);

    // Print the values of a and b after swapping
    printf("%d %d\n", a, b);
}

// Main function
int main() {
    // Call the solve function
    int x,y;
    printf("enter two numbers \n");
    scanf("%d%d",&x,&y);
    solve(x,y);

    // End the program
    return 0;
}

