#include <stdio.h>
int main() {
    int array[10]; // Initalizing the array with 10 values
    int i, sum = 0;
    float average;
    // Calculationg the sum of array elements
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d",&array[i]);
        sum += array[i]; // Add each element to sum
    }
    // Calculate the average
    average = sum / 10.0;
    // Display the sum and average
    printf("The sum of thae array elements is: %d\n", sum);
    printf("The average of the array elements is: %.2f\n", average);
    return 0;
}