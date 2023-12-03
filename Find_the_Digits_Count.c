#include<stdio.h>
int main()
{
    int n,count=0,rev=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        count++;
        n=n/10;
    }
    printf("%d",count);
    
}