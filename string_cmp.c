#include <stdio.h>
#include <string.h>


int main()
{
    char str1[10],str2[10];
    int equal=0,len1,len2;
    printf("enter two string");
    scanf("%s%s",&str1,&str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
        printf("No");
    else{
        for(int i=0;i<len1;i++){
            if(str1[i]==str2[i])
                equal++;
        }
        if(len1-equal==1){
            printf("Yes");
        }
        else
            printf("No");
    }
    
}
