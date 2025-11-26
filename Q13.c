// GCD using recursion
#include<stdio.h>
int GCD(int x, int y)
{
    if(y==0)
     return x;
    return GCD(y,x%y);
}
int main()
{
    int a,b;
    printf("enter the two no.s you want gcd of: ");
    scanf("%d %d",&a,&b);
    printf("The GCD is %d",GCD(a,b));

    return 0;
}
