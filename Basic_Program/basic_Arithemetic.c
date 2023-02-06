/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will do basic arithmetics like plus, multiplication
                 addition and subtraction
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    int a, b;

     printf("\nThis program will accept two numbers from a user and do all the primary Arithmetics\n\n");
         
         printf("input your first number: ");
         scanf("%d", &a);
    
         printf("ïnput your second number: ");
         scanf("%d", &b);
        
         int Sum = a + b;
         int Subt  = a - b;
         int Product  = a * b;
         float Div = a / b;
         int Mod = a % b;
         printf("The Sum of %d + %d = %d\n", a, b, Sum);
         printf("The Substraction of %d - %d = %d\n", a, b, Subt);
         printf("The Product of %d x %d = %d\n", a, b, Product);
         printf("The division of %d / %d = %d", a, b, Div);
         printf(".%d", Mod);

        return 0;
}
