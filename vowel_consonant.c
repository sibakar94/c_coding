#include <stdio.h>

int main()
{
    char a;
    int c;
    printf("enter a character");
    scanf("%c",&a);
    c=a;
    if(!((c>64 && c<91 )||(c>96 && c<123 )))
        printf("Invalid");
    else
    {
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("Vowel");
    else
        printf("Consonant");
    }
}
