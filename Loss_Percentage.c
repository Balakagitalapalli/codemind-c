#include<stdio.h>
int main()
{
    float cp,sp,lp;
    scanf("%f%f",&cp,&sp);
    lp=(cp-sp)/cp*100;
    printf("%.2f",lp);
}