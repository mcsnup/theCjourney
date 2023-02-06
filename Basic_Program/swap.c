/*  DATE:   31st Jan 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program will swap two given numbers
    
    Return: 0 Successful
*/

#include <stdio.h>

int main(void)
{


    {
        int p = 4;                           //initialing p to 4
        int m = 10;                         //initialing p to 10
        int c;                             //introducing a 3 variable

        c = p;      
        p = m;
        m = c;

        printf("\nThis code will automatically switch the value of p to m and vise versa\n\n");
        printf("p = %d\n", p);
        printf("m = %d\n\n", m);
    }
    //second attempt using user input
    {
        int x, y, c;

        printf("SECOND SWAP ATTEMPT USING USER INTERACTION\n\n");
        printf("Please Input a value for x: ");
        scanf("%d", &x);

        printf("Please input a value for y: ");
        scanf("%d", &y);
    
        c = x, x = y, y = c;

    printf("x = %d\n", x);
    printf("y = %d", y);
    return 0;   
    }
}
