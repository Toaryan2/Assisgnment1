#include <stdio.h>
int main()
{

    int sum = 0, sub = 0, multiplication = 0;
    float division, A, B;
    char ch;
    printf("ENTER THE VALUE OF A AND B\n ");
    scanf("%f%f", &A, &B);
    printf("Enter the operation('+,-,*,/') ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
       sum = A + B;
        printf("%d", sum);
        break;
    
    case '-':
    
        sub = A - B;
        printf("%d", sub);
        break;
    
    case '*':
    
        multiplication = A * B;
        printf("%d", multiplication);
        break;
    
    case '/':
    
        division = A / B;
        printf("%.2f", division);
        break;
    
    default:
        printf("Invalid Input !! ");
        break;
    
    }
    return 0;
}