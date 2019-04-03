#include <stdio.h>

int main()
{
    char a;
    int c;
    printf("enter a character");
    scanf("%c",&a);
    c=a;
    if(!((c>64 && c<91 )||(c>96 && c<123 )))
        printf("No");
    else
        printf("Alphabet");
}
