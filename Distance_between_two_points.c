#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,z;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    z=(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    printf("%.4f",z);
}