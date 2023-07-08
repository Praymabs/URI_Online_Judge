#include <stdio.h>
main()
{
    int A, B, C, n, i;
    scanf("%d", &n);
      for(i=1; i<=n; i++)
      {
        scanf("%d%d%d", &A, &B, &C);
        if(((A*A)+(B*B)==(C*C)) || ((A*A)+(C*C)==(B*B)) || ((B*B)+(C*C)==(A*A)))
            printf("Case 1: yes\n", i);
        else
            printf("Case 1: no\n", i);
      }
return 0;
}
