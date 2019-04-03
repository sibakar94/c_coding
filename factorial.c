#include <stdio.h>

int main()
{
    int num,fact=1;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        fact=fact*i;
    if(num==0)
        printf("1");
    else if(num<0)
        printf("Invalid");
    else
        printf("%d",fact);
}
