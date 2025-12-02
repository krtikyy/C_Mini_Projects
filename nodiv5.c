// Numbers divisible by 5
#include<stdio.h>
void main(){
    int i;
    for(i=1;i<=1000;i++){
        if(i%5==0){
            printf("%d\n",i);
        }
    }
}