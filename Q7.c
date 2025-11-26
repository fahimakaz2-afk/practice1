// binary to decimal
#include<stdio.h>

int main()
{
    int bin,dec=0,p=1,i=0,rem,check,temp;
    printf("enter a binary no.:");
    check=scanf("%d",&bin);
    if(check!=1)
    {
        printf("illegal input");
        return 0;
    }

    temp=bin;
    while(temp!=0)
    {
       rem=temp%10;
       if(rem!=1 && rem!=0) // to check 0&1 only.
       {
           printf("invalid input");
           return 0;

       }
        temp/=10;

    }
    while(bin!=0)
    {
       rem=bin%10;
       dec+=rem*p;
       p*=2;
       bin/=10;
    }
    printf("decimal = %d\t",dec);
}
