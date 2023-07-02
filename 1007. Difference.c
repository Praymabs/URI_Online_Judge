#include<stdio.h>
int main()
{
   int num,hour;
   float pay,salary;
   scanf("%d %d %f",&num,&hour,&pay);
   salary=pay*hour;
   printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,salary);
   return 0;

}
