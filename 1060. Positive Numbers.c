#include <stdio.h>
int main()
{
    double a;
    int i,m=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf", &a);
        if(a>=0)
        {
            m++;
        }
    }
    printf ("%d valores positivos\n",m);
    return 0;
}
