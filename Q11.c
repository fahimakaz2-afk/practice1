// Pyramid
#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch,n;
    int i,j,k;
    printf("enter alphabet: ");
    scanf("%c",&n);
    n=toupper(n);
    for(i=0;i<=n-'A'+1;i++)  // ----------------for no. of rows
    {
        for(j=0;j<=n-i;j++)
            printf(" "); // ------------------for spaces
        for(ch='A';ch<'A'+i;ch++) // ---------for increasing characters.
            printf("%c",ch);
        for(ch='A'+i-2;ch>='A';ch--) //------ for decreasing characters.
            printf("%c",ch);
        printf("\n");//-----new line

    }
}
