#include <stdio.h>

int main()
{
    int num,sum;
    printf("enter N");
    scanf("%d",&num);
    if(num<0)
        printf("Invalid");
    else{
    sum=num*(num+1)/2;
    printf("%d",sum);
    }
}

