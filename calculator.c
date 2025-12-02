// Calculator
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,r;
    char op;
    
    printf("Enter the equation : ");
    scanf("%d %c %d",&a,&op,&b);

    switch(op)
    {
        case '+' :
        r=a+b;
        break;
        case '*' :
        r=a*b;
        case '-' :
        r=a-b;
        break;
        case '/' :
        r=a/b;
        break;
        default :
        printf("Invalid equation!!!");
        exit(1);
    }
    printf("Result = %d",r);


}
