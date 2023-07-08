#include<stdio.h>
int main()
{
    int x,i,a=0,b=0,c=0,d=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&x);
    if(x%2==0){
        a=a+1;}
    if(x%2!=0){
        b=b+1;}
    if(x>0){
            c=c+1;}
    if(x<0){
            d=d+1;}
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",a,b,c,d);
    return 0;
}
