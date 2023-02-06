/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will swap two given numbers
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    printf("This program converts °C to ferenheit\n");
    
    float ferenheit, celsuis;
    printf("enter a value in ferenheit: ");
    scanf("%f", &ferenheit);
    
    celsuis = (ferenheit - 32) * 5/9;
    printf("%.0ff = %.2f°C", ferenheit, celsuis);

    return 0;
}
