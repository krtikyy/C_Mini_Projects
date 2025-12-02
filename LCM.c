#include <stdio.h>
int main()
{   int n1,n2,r,a1,a2,x;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    a1=n1;
    a2=n2;

    while(n2!=0){
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    x=(a1*a2)/n1;

    printf("%d",x);
    return 0;
}