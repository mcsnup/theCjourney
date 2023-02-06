/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will swap two given numbers
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{
    float meter, feet;
    printf("enter feet: ");
    scanf("%f", &feet);
    
    meter = feet / 0.303;
    printf("%fft = %.2fm", feet, meter);


    return 0;
}
