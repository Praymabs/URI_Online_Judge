#include<stdio.h>
int main()
{
    float I,J;
    for(I=0.0;I<=2.0;I=I+0.2)
    {
    for(J=1.0;J<=3; J++)
    printf("I=%d J=%d\n",I,J);
    }
    return 0;
}
