/*  DATE:   1st Feb 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will find the area of a Rectangle
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    float l, w;
    printf("This program will calculate the area of a Rectangle\n");
    printf("input lenth: ");
    scanf("%f", &l);
    
    printf("input width: ");
    scanf("%f", &w);
    
    float Area = l * w;
    printf("the area of the rectangle of lemgth %.1f and width %.1f = %.2f", l, w, Area);

    return 0;
}
