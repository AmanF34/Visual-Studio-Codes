#include <stdio.h>
int main() {
    int array[10] = {5, 90, 15, 20, 25, 30, 35, 40, 60};
    // Initilazing the array wtih 10 elements
    int i;

    // Display the elements of the array
    printf("The elements of the array are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d \n", array[i]);
    }
    return 0;
}
