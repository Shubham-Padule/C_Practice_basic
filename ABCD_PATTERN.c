#include <stdio.h>

void main()
{
    int i, j;
    char ch = 'A';

    for (i = 4; i >= 1; i--)
    { // Loop for the number of lines
        for (j = 1; j <= i; j++)
        { // Loop for the number of characters in each line
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
