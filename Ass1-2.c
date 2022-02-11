#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter two numbers");
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        printf("The greater number is %d",X);
    }
    else
    {
        printf("The greater number is %d",Y);
    }
    return 0;
}