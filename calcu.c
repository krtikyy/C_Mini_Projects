// calculator
#include<stdio.h>
#include<stdlib.h>

void main(){
    int a,b,r;
    char ch;
    printf("Enter a simple equation : ");
    scanf("%d %c %d",&a, &ch, &b);

    switch(ch){
        case'+':
        r=(a+b);
        break;
        case'-':
        r=(a-b);
        break;
        case'*':
        r=(a*b);
        break;
        case'/':
        r=(a/b);
        break;
        default:
        printf("Invalid Equation!!!!");
        exit(1);

    }
    printf("Result = %d",r);


}