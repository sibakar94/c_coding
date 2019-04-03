#include <stdio.h>
#include <math.h>
int main()
{
    int num,power=1,p;
    printf("enter a number & power");
    scanf("%d%d",&num,&p);
    if(p<0 || num<0)
        printf("Invalid");
    else{
    power=pow(num,p);
    printf("%d",power);
    }
}
