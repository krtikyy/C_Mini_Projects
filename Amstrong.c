// Amstrong no. bw 1 to 1000;
#include <stdio.h>
void main(){
    int n=1,a,b,c,d;
    while(n<1000){
        a=n%10;
        d=n/10;
        b=d%10;
        c=d/10;
        if(a*a*a+b*b*b+c*c*c==n){
            printf("%d \n",n);
        }
        n++;

    }
}