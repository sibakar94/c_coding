#include <stdio.h>

int main()
{
    int num_rev=0,num;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        num_rev=num_rev*10+num%10;
        num=num/10;
    }
    printf("%d",num_rev);
}
