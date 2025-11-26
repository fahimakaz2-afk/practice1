//leap yr or not.
#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    if(( yr%400==0 )||( yr%4==0 && yr%100==0 ))
        printf("it's a leap year");
    else
        printf("not a leap year");

    return 0;
}
