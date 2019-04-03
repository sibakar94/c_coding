#include <stdio.h>

void main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

}
