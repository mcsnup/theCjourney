/*  DATE:   1st Feb 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will find the area of a Square
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    float l;
    printf("This program will calculate the area of a Square\n");
    printf("input lenth: ");
    scanf("%f", &l);
    
    float Area = l * l;
    printf("the area of the Square of lemgth %.1f = %.2f", l, Area);

    return 0;
}
