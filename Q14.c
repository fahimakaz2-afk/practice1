// fibonacci using recursion
#include<stdio.h>
int fibon(int n)
{
   if(n==0)
   return 0;
   else if (n==1)
    return 1;
   else
    return fibon(n-1)+fibon(n-2);

}
int main()
{
    int a;
    printf("enter the  no.\n ");
    scanf("%d",&a);
    printf("The fibonacci sereis");
    for(int i=0;i<=a;i++)
    {
        printf("%d\n",fibon(i));
    }

    return 0;
}
