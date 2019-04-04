#include <stdio.h>
#include <string.h>


int main()
{
    char str[20];
    printf("enter a string");
    scanf("%s",&str);
    int len=strlen(str);
    str[0]=toupper(str[0]);
    for(int i=1;i<len;i++)
    {
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
            i++;
            continue;
        }
        else
        str[i]=tolower(str[i]);
    }
    
    printf("%s",str);
    
}
