// LCM
#include <stdio.h>
void main(){
    int n1,n2,lcm,p,r;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    p=n1*n2;
    while(n2!=0){
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    lcm=p/n1;
    printf("LCM of the number : %d",lcm);
}