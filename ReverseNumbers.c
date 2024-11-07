#include <stdio.h>
int main() {
    int num, reversedNum = 0;
    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Store the original number for display
    int originalNum = num;
    // Loop to reverse the number 
    for (; num != 0; num /= 10) {
        // Get the last digit and add it top the reversed number
        reversedNum = reversedNum * 10 + num % 10;
}
// Display the reversed number
printf("The reverse of %d is %d\n", originalNum, reversedNum);
return 0;
}