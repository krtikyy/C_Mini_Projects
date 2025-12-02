#include <stdio.h>
void main()
{int a , amt , b;
    printf("Welcome to ATM\n");
    printf("1 : Check Balance\n");
    printf("2 : Withdraw Cash\n");  
    printf("3 : Deposit Cash\n");

    printf("Enter the option : ");
    scanf("%d",&a);
    switch(a)
    {
        case(1):
        printf("Your balance is 10000 rs");
        break;
        case(2):
        printf("Enter the amount to be withdrawn : ");
        scanf("%d",&amt);
        if (amt>10000)
        {
            printf("Insufficient balance");
        }
        else{
            printf("Please collect your cash\n");
            printf("Your remaining balance is %d rs",10000-amt);
        }
        break;
        case(3):
        printf("Enter the amount to be deposited : ");
        scanf("%d",&b);
        printf("Your new balance is %d rs",10000+b);
        break;
        default:
        printf("Invalid option");

    }
}