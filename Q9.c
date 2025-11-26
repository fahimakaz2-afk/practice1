// decimal to hexa
#include<stdio.h>

int main()
{
    char hex[100];
    int i = 0, j, rem, dec, check;

    printf("enter decimal no.:  ");
    check = scanf("%d", &dec);

    if(check != 1)
    {
        printf("illegal input");
        return 0;
    }

    if(dec == 0)   // special case
    {
        printf("0");
        return 0;
    }

    while(dec != 0)
    {
        rem = dec % 16;

        if(rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem + 55;   // 'A' = 65 → 65 - 10 = 55

        dec /= 16;
        i++;
    }

    // print reverse
    for(j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    return 0;
}
