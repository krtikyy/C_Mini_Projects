// Multiplication Table
#include <stdio.h>
void main(){
    int s;
    int n=1;
    printf("Enter the no. you want the table of : ");
    scanf("%d",&s);
    while(n<=10){
        printf("%d X %d = %d \n",s,n,s*n);
        n++;
    }
}