#include<stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i<=n+11;i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }
    return 0;
}

