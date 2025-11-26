//calculator using switch +,-,*,\...
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no. you want to (+,-,*,\\) :");
    scanf("%d %d",&a,&b);
    char ch;
    printf("Enter (+,-,*,\\):");
    scanf(" %c",&ch);
    switch(ch)
    {
    case'+':
        printf("add is %d",a+b);
        break;
    case '-':
        printf("sub is %d",a-b);
        break;
    case '*':
        printf("multiply is %d",a*b);
        break;
    case '\\':
        if (b==0)
            printf("invalid division b cannot be 0");
        else
            printf("divide is %d",a/b);
        break;
    default:
        printf("ERROR!! \n Enter the valid operator");

    }

    return 0;
}
