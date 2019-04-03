#include <stdio.h>

int main()
{
    int num,sum=0,n;
    printf("enter size & sum upto N");
    scanf("%d%d",&num,&n);
    
    int array[num];
    printf("enter an array");
    for(int i=0;i<num;i++)
        scanf("%d",&array[i]);
    
    if(n>num ||n<0)
        printf("Invalid");
    else
    {
        for(int j=0;j<n;j++)
            sum=sum+array[j];
        printf("%d",sum);
    }
}
