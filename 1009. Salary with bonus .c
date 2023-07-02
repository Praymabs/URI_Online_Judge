#include<stdio.h>
int main()
{
    char name [30];
    double Total,salary;
    float sell ;
    gets (name);
 scanf("%lf %f",&salary,&sell);
    Total=(salary+(sell*15/100));
    printf("TOTAL = R$ %.2lf\n",Total);
    return 0;
}
