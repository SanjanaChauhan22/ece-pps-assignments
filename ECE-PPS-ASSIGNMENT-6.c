#include <stdio.h>
unsigned long long factorial_iterative(int n)
{
    unsigned long long fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
} 
unsigned long long factorial_recursive(int n)
 {
    if (n == 0 || n == 1)
      return 1;
    else 
      return n * factorial_recursive(n - 1);
 }
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
  {
    printf("Factorial is not defined for negative numbers.\n");
    return 1;
  }
    if (num > 20)
  { 
    printf("Number too large (maximum supposed to be 20).\n");
    return 1;
   }
    printf("Factorial of %d (without recursion) = %11u\n", num, factorial_iterative(num));
    printf("Factorial of %d (with recursion) = %11u\n", num, factorial_recursive(num));
    return 0;
}    
