#include<stdio.h>
main()
{
    int N,hours,min,seconds;
    scanf("%d",&N);
    hours=N/3600;
    N=N%3600;
    min=N/60;
    seconds=N%60;
    printf("%d:%d:%d\n",hours,min,seconds);
    return 0;
}
