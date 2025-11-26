//convert sec into hr,min,sec.
#include<stdio.h>
int main()
{
    int sec,hr,min;
    printf("Enter seconds you want to convert: ");
    scanf("%d",&sec);
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("%d hours %d minutes %d seconds",hr,min,sec);

    return 0;
}
