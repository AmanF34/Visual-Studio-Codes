#include <stdio.h>
int main() {
    int array[10] = {3, 8, 12, 17, 24, 35, 40, 50, 67, 82}; // Initalize the array with 10 values
int i;
// Display the veen numbers
printf("Even numbers in the array are:\n");
for(i = 0; i < 10; i++) {
    if(array[i] % 2 == 0) { // Check if the number is even
        printf("%d\n", array[i]); // Print only even numbers

        }
    }
return 0;
}