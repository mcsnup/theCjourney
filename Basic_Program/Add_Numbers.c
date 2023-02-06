#include <stdio.h>

int main(void)
{
    int p, m;

    printf("This program will accept and compute two numbers\n");
    printf("input your first number: ");
    scanf("%d", &p);
    //printf("ÿour first number is: %d\n", p);

    printf("ïnput your second number: ");
    scanf("%d", &m);
    //printf("your second number is: %d\n\n\n", m);

    int Result = p + m;

    printf("\n\tAnd The sum of %d and %d = %d\n\n", p, m, Result);


    return 0;
}
