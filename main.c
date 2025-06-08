#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0; //inicial deposit
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0; // How often does interest acreu
    double total = 0.0;

    printf("COMPOUND INTEREST CALCULATOR\n\n");

    printf("Enter the principal (P):");
    scanf("%lf", &principal);

    printf("Enter the interest rate %%(r):");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t):");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n):");
    scanf("%d", &times_compounded); 


    total = principal * pow(1 + rate / times_compounded, times_compounded * years);
    printf("After %d years, the total will be $%.2lf.", years, total);

}