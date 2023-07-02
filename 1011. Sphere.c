#include <stdio.h>
main()
{
    double R,Pi,VOLUME;
    scanf("%lf", &R);
    Pi=3.14159;
    VOLUME = (4.0/3)*Pi*(R*R*R);
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}
