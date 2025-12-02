// wap to check wether given character is alphabet or not
// ASCII A-65
#include <stdio.h>
void main()
{
    char ab ;
    printf("Enter the character : ");
    scanf("%c",&ab);
    
    if(ab>='A'&&ab<='Z' )
    {
        printf("Alphabet");
    }
    else if(ab>='a'&&ab<='z')
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not an Alphabet");
    }




}