// seperate arrays for even and odd
#include<stdio.h>
void main()
{
    int arr[100],eve[100],odd[100],n,i,j,k;
    printf("enter how many elements? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    j=0;
    k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            eve[j++]=arr[i];
        }
        else
        {
            odd[k++]=arr[i];
        }
    }
     printf("even is:\n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",eve[i]);
    }
    printf("\n");
    printf("odd is:\n");
    for(i=0;i<k;i++)
    {
         printf("%d\t",odd[i]);
    }
}
