#include <stdio.h>
int main()
{
   int i,n,s,max=0;
    for(i=1;i<=100;i++)
   {
      scanf("%d",&n);
      if(max<n)
   {
    max=n;
    s=i;
   }
   }
   printf("%d\n",max);
   printf("%d\n",s);
   return 0;
}
