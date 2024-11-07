#include <stdio.h>
int main () {
    int num, sum = 0; // Variables to store the entered number and the sum
    // Using a do-while loop to get user input
    do {
        printf("Enter a number (negative number to stop):");
        scanf("%d", &num); // Read the input
        if (num >= 0) { // Add to sum only if the number is non-negative
            sum += num;
        }
    } while (num >= 0); // Continue until a negative number is entered
    // Display the sum of the entered numbeers
    printf("The sum of all entered numbers is: %d\n", sum);
    
    return 0;
}