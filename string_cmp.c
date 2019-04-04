#include <stdio.h>
#include <string.h>


int main()
{
    char str1[10],str2[10];
    int result;
    printf("enter two string");
    scanf("%s%s",&str1,&str2);
    result=strcmp(str1,str2);
    if(result==-1 ||result==1){
        printf("Yes");
    }
    else
        printf("No");
        
    
}
