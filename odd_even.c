#include <stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num<0)
        printf("Invalid");
    else{
    if(num%2==0)
        printf("Even");
    else 
        printf("Odd");
    }
}
