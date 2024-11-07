#include <stdio.h>
int main() {
    int n, i;
    // Ask the user for the number of elements
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &n);
    int array[n]; // Declare an array of size 'n'
    // Read 'n' elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    }
    // Display the array inreverse order
    printf("Array elements in reverse order:\n");
    for(i = n-1; i >= 0; i--) {
    printf("%d", array[i]); // print each element in reverse
    }
    return 0;
}