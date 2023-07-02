#include<stdio.h>
int main()
{
    int number,hour;
    float pay,total;
    scanf("%d %d %f",&number,&hour,&pay);
    total=pay*hour;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",total);
    return 0;
}