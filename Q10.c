// Max and next Max
#include<stdio.h>
int main()
{
    int a,b,c,max,nmax;
    printf("enter the three no. u want to compare: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        max=a;
        if(b>c)
            nmax=b;
        else
            nmax=c;
    }
    else if(b>c)
    {
        max=b;
        if(a>c)
            nmax=a;
        else
            nmax=c;
    }
    else
    {
        max=c;
        if(a>b)
            nmax=a;
        else
            nmax=b;
    }
    printf("max=%d\nnext max=%d",max,nmax);

}
