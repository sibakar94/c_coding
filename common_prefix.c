
#include <stdio.h>
#include <string.h>

int find_min(int [],int);
int main()
{
    int num,k=0;
    printf("enter number of strings");
    scanf("%d",&num);
    char ch_arr[num][20];
    int len_arr[num];
    for(int i=0;i<num;i++){
        printf("enter string %d",i+1);
        scanf("%s",ch_arr[i]);
    }
    
    
    for(int i=0;i<num;i++)
        len_arr[i]=strlen(ch_arr[i]);
        
    int min_len=find_min(len_arr,num);
    
    
    for(int i=0;i<min_len;i++)
    {
        int count=0;
        char temp=ch_arr[0][i];
        for(int j=0;j<num;j++){
            if(temp==ch_arr[j][i])
                count=count+1;
            else
                break;
        }
        if(count==num){
            printf("%c",temp);
        }
    }
    
    
}

int find_min(int len_arr[],int length)
{
    int min=len_arr[0];
    for(int i=1;i<length;i++)
    {
        if(min>len_arr[i])
            min=len_arr[i];
    }
    return min;
}
