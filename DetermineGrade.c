#include<stdio.h>
int main()
{
    int grade;
    printf("enter a grade \n");
    scanf("%d",&grade);
    if (grade >= 90) {
        printf("Grade: A\n");
    } else if(grade >= 80){
        printf("Grade: B\n");
    } else if (grade >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
    }
