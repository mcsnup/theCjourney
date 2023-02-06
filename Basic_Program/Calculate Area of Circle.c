/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will find the area of a circle of given the radius
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    float radius;
    printf("This program will calculate the area of a circle, provided the radius is known\n");
    printf("input radius: ");
    scanf("%f", &radius);
    float Area = (3.142657 * radius * radius);
    printf("the area of a circle of radius %.2f = %f", radius, Area);

    return 0;
}
