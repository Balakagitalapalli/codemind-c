#include<stdio.h>
int main()
{
    float bs,pf,gs,hr,da;
    scanf("%f%f%f",&bs,&hr,&da);
    pf=0.12*bs;
    gs=bs+hr+da+pf;
    printf("%.2f
%.2f",pf,gs);
}