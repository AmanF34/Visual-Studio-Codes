#include <stdio.h>
int main() {
    int N, i, c;
printf("Enter No");
scanf("%d", & N);
for(i = 1; i<= N; i++)
{
    c= i * i * i;
    printf("Cube of %d is %d\n", i,c);
}
return 0;
}