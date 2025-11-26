// structure array to and display the name , roll no, marks for three subjects of 5 students with avg of there marks
#include<stdio.h>
struct std
{
    char name[20];
    int r;
    int marks[3];

};
void main()
{
    int i,j;
    float sum,m[10],avg;
    struct std s[5];
    for(i=0;i<5;i++)
    {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter roll no. of student %d: ",i+1);
        scanf("%d",&s[i].r);
        sum=0;
        for(j=0;j<3;j++)
        {
            printf("enter the marks %d subject: ",j+1);
            scanf("%d",&s[i].marks[j]);
            sum+=s[i].marks[j];
        }
        avg=sum/3;
        m[i]=avg;
    }
    printf("\n");
    for (i=0;i<5;i++)
    {
        printf("Student %d name %s\n",i+1,s[i].name);
        printf("Student %d roll no. %d\n",i+1,s[i].r);
        for(j=0;j<3;j++)
        {
            printf("Student %d marks %d\n",i+1,s[i].marks[j]);
        }
        printf("the average is %f: ",m[i]);
        printf("\n");
    }



}
