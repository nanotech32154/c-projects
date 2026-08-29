#include <stdio.h>
#include <math.h>
int main(){
    double radius=0;
    printf("Enter the radius of the circle in cm: ");
    scanf("%lf", &radius);
    const double PI=3.14159265359;
    double perimeter=2*PI*radius;
    double area=PI*pow(radius, 2);
    double s_area=4*PI*pow(radius,2);
    double s_vol=1.33*PI*pow(radius,3);
    printf("The perimeter of the circle is: %.2lf cm\n", perimeter);
    printf("The area of the circle is: %.4lf\n",area);
    printf("The surface area of the sphere is: %.4lf cm^2\n",s_area);
    printf("The volume of the sphere is: %.4lf cm^3\n", s_vol);

    return 0;





}