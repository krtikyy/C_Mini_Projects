// Minimum number from the entered 10 numbers
#include<stdio.h>
void main(){
    int i, a[i],min;
    printf("Enter any 10 numbers : ");
    for(i=1;i<=10;i++){
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=1;i<=10;i++){
        if (a[i]<min){
            min = a[i];
        }
    }
    printf("Minimum number : %d",min);

}