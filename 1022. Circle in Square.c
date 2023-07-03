#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)

int main()
{
    int i, n;
    double r, E, Sonda;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%lf", &r);
        E=(r+r)*(r+r);
        Sonda=E-(PI*r*r);
        printf("Case %d: %.2lf\n", i, Sonda);
    }
return 0;
}



