/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program convert any degree celsuis to ferenheit
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{   
    printf("This program converts °C to ferenheit\n");
    
    float ferenheit, celsuis;
    printf("enter a value in °C: ");
    scanf("%f", &celsuis);
    
    ferenheit = (celsuis * 1.8) + 32;
    printf("%.0f°C = %.2ff", celsuis, ferenheit);

    return 0;
}
