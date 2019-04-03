
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter two intervals");
    scanf("%d%d",&num1,&num2);
    if(num1<0 ||num2<0)
        printf("Invalid");
    else{
    for(int i=num1+1;i<num2;i++)
        if(i%2!=0)
            printf("%d",i);
    }
}
