#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter first number:");
    scanf("%d" , &a);
    printf("Enter second number:");
    scanf("%d" , &b);
    printf("Enter third number:");
    scanf("%d" , &c);
    printf("Enter fourth number:");
    scanf("%d" , &d);
    printf("Enter fifth number:");
    scanf("%d" , &e); 
    f = a + b + c + d + e;
    printf("Sum = %d\n" , f);
    g = f/2;
    printf("Avg = %d\n" , g);
    return 0;       
}