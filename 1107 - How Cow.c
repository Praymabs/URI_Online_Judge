#include <stdio.h>
int main()
{
    int n, i, j, k, e, f, x1, x2, y1, y2;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
        scanf("%d", &k);
        for(j=1; j<=k; j++)
        {
            scanf("%d %d", &e, &f);
            if(((e>=x1) &&(e<=x2)) && ((f>=y1)&&(f<=y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
