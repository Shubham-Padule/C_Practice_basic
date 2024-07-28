#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='10' && ch<='a')
    {
        printf("character enter digit");
    }
    else
    {
     printf("character enter character");
    

    }
}