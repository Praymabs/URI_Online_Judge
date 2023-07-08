#include<stdio.h>
main()
{
    float a;
    scanf("%f",&a);
    if(a<=400.00)
    {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", a*1.15,a*0.15);
    }
    else if(a<=800.01)
    {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", a*1.12,a*0.12);
    }
    else if(a<=1200.00)
    {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", a*1.10,a*0.10);
    }
    else if(a<=2000.00)
    {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", a*1.07,a*0.07);
    }
    else
    {
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", a*1.04,a*0.04);
    }
    return 0;

}
