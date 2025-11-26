// hexadecimal to decimal
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i, n, dec = 0, base = 1;
    char hexa[100];
    char ch;

    printf("Enter hexadecimal: \n");
    scanf("%s", hexa);

    n = strlen(hexa);

    for(i = n - 1; i >= 0; i--)
    {
        ch = hexa[i];

        if(isalpha(ch))
            ch = toupper(ch);

        if(ch >= 'A' && ch <= 'F')
        {
            dec += (ch - 55) * base;   // A = 65 → 65 - 55 = 10
        }
        else if(ch >= '0' && ch <= '9')
        {
            dec += (ch - '0') * base;  // '0' = 48
        }
        else
        {
            printf("invalid hexadecimal input");
            return 0;
        }

        base *= 16;
    }

    printf("decimal = %d", dec);
    return 0;
}
