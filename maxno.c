// Highest no. from the input
#include<stdio.h>
void main(){
    int i, max, a[10];
    printf("Enter the 10 numbers : ");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<=10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Max No. is : %d",max);

}