#include <stdio.h>

int main()
{
    int bin[100], dec, rem, i = 0, j;
    int status;

    printf("Enter a decimal number: ");

    // Check if input is a valid integer
    status = scanf("%d", &dec);

    if (status != 1)
    {
        printf("ERROR: Illegal input! Please enter an integer only.\n");
        return 0;
    }

    // Case: input = 0
    if (dec == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    // For negative numbers: print '-' sign and convert magnitude
    if (dec < 0)
    {
        printf("Binary = -");
        dec = -dec;
    }
    else
    {
        printf("Binary = ");
    }

    // Convert decimal to binary
    while (dec != 0)
    {
        rem = dec % 2;
        dec /= 2;
        bin[i++] = rem;
    }

    // Print binary in reverse
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    printf("\n");
    return 0;
}
