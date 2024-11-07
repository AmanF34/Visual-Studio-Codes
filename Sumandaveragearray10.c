#include <stdio.h>
int main() {
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Initalizing the array witht 10 values
    int i, sum = 0;
    float average;
    // Calculationg the sum of array elements
    for(i = 0; i < 10; i++) {
        sum += array[i]; // Add each element to sum
    }
    // Calculate the average
    average = sum / 10.0;
    // Display the sum and average
    printf("The sum of thae array elements is: %d\n", sum);
    printf("The average of the array elements is: %.2f\n", average);
    return 0;
}