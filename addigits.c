// Program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int n, sum =0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
        sum = sum +(n%10);
        n=n/10;
    }
    printf("Sum of Digits : %d",sum);
    return 0;
}