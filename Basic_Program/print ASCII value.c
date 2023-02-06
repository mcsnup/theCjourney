/*  DATE:   1st Feb 2023
    AUTHOR: ArmStrong Joe
    DESCRIPTION: this program prints the ASCII value of any given cheracter
    
    Return: 0 Successful
*/

#include <stdio.h>
int main()
{
    char w;
    printf("this program prints the ASCII value of a character\n");
    printf("Enter a character: ");
    scanf("%c", &w);// Reads character input
    printf("ASCII value of %c = %d", w, w);
    // %d displays the integer value of a character
    // %c displays the actual character
    
    return 0
