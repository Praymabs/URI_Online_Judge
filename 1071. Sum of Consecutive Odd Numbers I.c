#include<stdio.h>

int main()
{
    int X, Y, i, s=0;
    scanf("%d %d",&X,&Y);
    for(i=Y+1; i<X; i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
    printf("%d\n",s);
    return 0;
}
