//wap to convert uppercase string to lowercase string using recursion
#include <stdio.h>
int main (){
    char str[100];
    char *s=str;

    printf("Enter the uppercase string : ");
    gets(str);

    while(*s !=0){
        if (*s>='A' && *s<='Z'){
            *s = *s + 32;
        }
        s++;
    }
    printf("Lowercase string : %s",str);
    return 0;

}
