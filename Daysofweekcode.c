#include<stdio.h>
int main()
{
    int day = 3;
    switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Weekend\n");
}
}