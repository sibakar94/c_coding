#include <stdio.h>
#include <math.h>

int main()
{
    int num,copy,sum=0,d;
    printf("enter a number");
    scanf("%d",&num);
    copy=num;
    if(num>100000 ||num<0)
        printf("Invalid");
    else
    {
        while(copy>0){
            d=copy%10;
            sum=sum+pow(d,3);
            copy=copy/10;
        }
        if(sum==num)
            printf("Yes");
        else
            printf("No");
    }
    
}
