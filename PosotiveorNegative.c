#include<stdio.h>
int main()
{
    int num;
    printf("enter a num");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is positive\n");
    }
    if(num<0)
    {
        printf("the number is negative\n");
    }
    return 0;
}