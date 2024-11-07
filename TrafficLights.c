#include <stdio.h>

int main() {
    char color;

    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &color);

switch (color) {
    case 'R':
        printf("Stop\n");
        break;
    case 'G' :
    printf("Go\n");
    break;
    case 'Y' :
        printf("Caution\n");
        break;
    default:
        printf("Invalid Color! Please enter R, G, or y.\n");
}
    return 0;
}