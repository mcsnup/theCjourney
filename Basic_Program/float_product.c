/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will multiple two floating Numbers
    
    Return: 0 Successful
*/
#include <stdio.h>

int main(void)
{
    float num1 = 12.4;
    float num2 = 6.3;

    float Result = num1 * num2;
    printf("the product of %f and %f = %f", num1, num2, Result);

            //this section accept the computated data from users    

    {

         printf("\nThis program will accept two numbers from a user and provide it product\n");
         printf("input your first number: ");
         scanf("%f", &num1);
    
         printf("ïnput your second number: ");
         scanf("%f", &num2);
    
         float Product  = num1 * num2;

        printf("\n\tAnd The Product of %f and %f = %f\n\n", num1, num2, Product);
    return 0;
    }
    
}
