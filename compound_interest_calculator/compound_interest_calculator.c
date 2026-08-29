#include <stdio.h>
#include <math.h>
int main(){
    double principal=0;
    double rate=0;
    int times_compounded=0;
    int years=0;
    double total=0;
    printf("Compound interest calculator \n\n");
    printf("Enter the principal: ");
    scanf("%lf", &principal);
    printf("Enter the interest rate: ");
    scanf("%lf", &rate);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &times_compounded);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    rate = rate/100;
    double x=1+ (rate/times_compounded);
    int y=times_compounded*years;
    total = principal * pow(1+ rate / years, times_compounded * years);
    printf("After %d year/s, the total will be $%.2lf", years, total);
    return 0;
    






}