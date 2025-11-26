// Swapping two numbers using function
#include<stdio.h>

void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int a, b;
    printf("enter two no.: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);   // pass address

    printf("the two no.s after swapping: %d %d", a, b);
}
