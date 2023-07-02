#include<stdio.h>
int main()
{
    int u1,u2;
    float p1,p2,sonda;
    scanf(" %d %f" ,&u1 ,&p1);
    scanf(" %d %f" ,&u2 ,&p2);
    sonda=(u1*p1)+(u2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",sonda);
    return 0;
}
