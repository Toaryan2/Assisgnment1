#include <stdio.h>
#include <math.h>
int main()
{
    float R, A,D,C;
    printf("Enter the radius : ");
    scanf("%f", &R);

    A = 3.14 * R * R;
    D = 2*R;
    C = 2 *3.14 *R;

    printf("Area of the circle = %.2f\n", A);
    printf("Diameter of the circle = %.2f\n",D);
    printf("Circumference of the circle = %.2f\n", C);

    return 0;
}