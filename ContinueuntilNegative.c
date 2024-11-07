#include <stdio.h>
int main() {
    int num, sum = 0; // Variable to store the entered number and the sum
    // Using a do-while loop to get your input
    do {
        printf("Enter a number (negative number to stop): ");
        scanf("%d", &num); // Read the input
        if (num >= 0) { // Add to sum only if the number is non-negative
        sum += num;

        }
    }while (num >= 0); // Cintinue until a negative number is entered 
    // Display the sum of the entered number
    printf("The sum of all the entered numbers is: %d\n", sum);

    return 0;
}