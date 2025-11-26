// fibonacci using recursion
#include<stdio.h>
void addmat(int a[10][10],int b[10][10],int n, int res[10][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j]=a[i][j]+b[i][j];
        }
    }

}
void submat(int a[10][10],int b[10][10],int n, int res[10][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j]=a[i][j]-b[i][j];
        }
    }

}
void mulmat(int a[10][10],int b[10][10],int n, int res[10][10])
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j]=0;
            for(k=0;k<n;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }

    }

}
void display(int a[10][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],m[10][10];
    int i,j;
    printf("matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" enter element_ A[%d%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("matrix B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" enter element_B[%d%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("addition is :\n");
    addmat(a,b,3,c);
    printf("\n");
    display(c,3);
    printf("subtract is :\n");
    submat(a,b,3,d);
    printf("\n");
    display(d,3);
    printf("the multiply is :\n");
    mulmat(a,b,3,m);
    printf("\n");
    display(m,3);


    return 0;
}
