#include <stdio.h>
int main()
{
    float a,b;
    char op;
    printf("enter a :");
    scanf("%f", &a );
    printf("enter b :");
    scanf("%f", &b );
    printf("\n CALCULATOR MENU \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:");
    scanf(" %c" , &op);
    switch(op)
    {
        case '1':
        printf("Addition is=%f" , a + b);
        break;
        case '2':
        printf("Subtraction is=%f" , a - b);
        break;
        case '3':
        printf("Multiplication is=%f" , a * b);
        break;
        case '4':
         if (b != 0){
        printf("Division is=%f" , a / b);    
         }else{
         printf("Error! Division by zero is not allowed.");   
         }
        break;
        default:
        printf("Invalid choice! Please enter between 1 to 5");
    }
    return 0;
}