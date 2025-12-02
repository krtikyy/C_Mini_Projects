#include <stdio.h>
void main()
{
    int n , b=78;
   
    {
        while(n!=b)
        {
        printf("Enter a number : ");
        scanf("%d",&n);
        if (n>b)
        {
            printf("your no. is far greater\n");
        }
        else if(n<b)
        {
            printf("your no. is far smaller\n");
        }
       
    }
    }
    printf("congratulations! you guessed it right");

}
