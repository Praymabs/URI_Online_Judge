#include <stdio.h>
int main()
{
    int a,b,n,i,sonda;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);
        if(a<=b)
            sonda=b*4+19;
        else
            sonda=(2*a-b)*4 +19;
        printf("Case %d: %d\n", d,sonda);
    }
    return 0;
}
