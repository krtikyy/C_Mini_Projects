#include <stdio.h>
void main()
{
    char al ;
    printf("Enter the alphabet : ");
    scanf("%c",&al);
    if(al =='a' || al =='e' || al =='i' || al =='o' || al =='u' || al =='A' || al =='E' || al =='I' || al =='O' || al =='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}