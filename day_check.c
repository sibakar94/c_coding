#include <stdio.h>
#include <string.h>


int main()
{
    char str[10];
    printf("enter a day");
    scanf("%s",&str);
    int i=0;
    while(str[i]!='\0'){
        str[i]=tolower(str[i]);
        i++;
    }
    if(!(strcmp(str,"monday") && strcmp(str,"tuesday") && strcmp(str,"wednesday") && strcmp(str,"thursday") && strcmp(str,"friday")))
        printf("No");
    else if(!(strcmp(str,"saturday") && strcmp(str,"sunday")))
        printf("Yes");
    else
        printf("Invalid");
    
}
