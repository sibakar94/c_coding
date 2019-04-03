#include <stdio.h>
int main()
{
    int num,i,c=0;
    printf("enter a number less than equals to 1000");
    scanf("%d",&num);
    for(i=2;i<num;i++)
        if(num%i==0){
        c=1;
        break;}
    if(c==1)
        printf("No");
    else
        printf("Yes");
}
