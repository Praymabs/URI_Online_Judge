#include <stdio.h>
main()
{
    float x1,y1,x2,y2,Distance;
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    Distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4f\n",Distance);
    return 0;
}
