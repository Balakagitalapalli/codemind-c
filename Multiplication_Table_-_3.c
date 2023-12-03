#include<stdio.h>
int main()
{
    int i,k,n,m;
    scanf("%d%d%d",&k,&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%d x %d = %d
",k,i,k*i);
    }
}