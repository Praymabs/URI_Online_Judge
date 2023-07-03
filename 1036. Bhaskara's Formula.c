#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,y,z;
    scanf("%f %f %f",&a,&b,&c);
    if(a == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    x=(b*b)-(4*a*c);
    if(x>=0){
        y=(-b-sqrt(x))/2*a;
        z=(-b+sqrt(x))/2*a;
        printf("R1 = %.5f\n",y);
        printf("R2 = %.5f\n",z);
        }
    else{
       printf("Impossivel calcular\n");
    }
    return 0;

}
