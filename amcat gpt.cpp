#include <stdio.h>

int main() {
    int arr[1000];
    int i = 0;
    int size;
    
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    
    printf("Enter the numbers:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize variables for Kadane's Algorithm
    int max_sum = arr[0];
    int current_sum = arr[0];
    
    // Implementing Kadane's Algorithm
    for (i = 1; i < size; i++) {
        current_sum = (current_sum + arr[i]) > arr[i] ? (current_sum + arr[i]) : arr[i];
        max_sum = max_sum > current_sum ? max_sum : current_sum;
    }
    
    printf("The greatest sum of contiguous subarray is: %d\n", max_sum);
    
    return 0;
}

