#include <stdio.h>
#include <math.h>


int main()
{
    int sum=0,num;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0){
        sum=sum+pow(num%10,2);
        num=num/10;
    }
    printf("%d",sum);
}
