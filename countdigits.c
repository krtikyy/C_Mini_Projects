// Program to find the number of digits of an number.
#include <stdio.h>
int main(){
    int n;
    int c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        c++;
    }
    printf("No. of digits : %d",c);
    return 0;
}