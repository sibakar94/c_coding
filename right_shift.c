#include <stdio.h>
#include <string.h>


int main()
{
    int size,num;
    printf("enter size of array and no of right shift");
    scanf("%d%d",&size,&num);
    int arr[size];
    printf("enter the array");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    for(int j=1;j<=num;j++){
        int temp=arr[size-1];
        for(int i=size-1;i>0;i--)
            arr[i]=arr[i-1];
        arr[0]=temp;
    }
    
    for(int k=0;k<size;k++)
        printf("%d",arr[k]);
    
}
