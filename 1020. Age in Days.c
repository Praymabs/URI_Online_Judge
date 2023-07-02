#include<stdio.h>
main()
{
    int N,Y,M,H;
    scanf("%d",&N);
    Y=N/365;
    N=N%365;
    M=N/30;
    H=N%30;
    printf("%d ano(s)\n",Y);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",H);
    return 0;
}
