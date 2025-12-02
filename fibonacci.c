// fibonaccci series first 20 numbers
#include<stdio.h>
void main(){
    int a=0;
    int b=1;
    int c,i;
    printf("%d\n%d\n",a,b);
    for(i=3;i<20;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}