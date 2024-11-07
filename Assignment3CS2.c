#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time'
    printf("ENter principal, rate of interest (in %), and time);
    scanf("%f %f %f", &principal, &rate, &time);

    float amount = principal * pow((1 + rate / 100), time);
    float compoundinterest = amount - principal;

    printf("Compound interest: %.2f\n", compoundinterest);

    return 0;
    
}