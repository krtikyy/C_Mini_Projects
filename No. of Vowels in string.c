#include <stdio.h>
void main()
{
    char a[30]; int i=0, c=0;
    printf("Enter the string : ");
    fgets(a, sizeof(a), stdin);
    while(a[i]!='\0')
    {
        if(a[i]==97 || a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117)
            c=c+1;
        i++;
    }
    printf("Number of vowels: %d\n", c);
}
