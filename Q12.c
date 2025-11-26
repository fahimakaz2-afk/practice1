// prime no. series upto n.
#include<stdio.h>
int main()
{
    int n,i,j,isprime;
    printf("Enter upto which no.? ");
    scanf("%d",&n);
    printf("the prime no.s are:\n");
    for(i=2;i<=n;i++)
    {
        isprime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }

        }
     if(isprime==1)
        printf("%d\n",i);
    }
    return 0;
}
