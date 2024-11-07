#include <stdio.h>
int main() {
    int n, i, max, min;
    int array[10]; // Declare an array of size 'n'
    // Read '10' elements into the array
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    // Initalize bthe first element as both max and min
    max = array[0];
    min = array[0];
    // Traverse through the array to find max and min
    for(i = 1; i < 10; i++) {
        if(array[i] > max) {
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
// Dispplay results
printf("Maximum element in the array is:%d\n", max);
printf("Minimum element in the array is:%d\n", min);
return 0;
}