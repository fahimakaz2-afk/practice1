//to check whether a vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter any alphabet you want to check:");
    scanf("%c",&ch);
    if (isalpha(ch))
    {
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("It's a vowel");

        }
        else
            printf("It's a consonant");
    }

    else
        printf("ERROR!!!! \n Enter an alphabet please......");

    return 0;
}
