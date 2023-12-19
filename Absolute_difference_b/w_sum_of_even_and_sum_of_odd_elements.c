#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
        
    }
    printf("%d",abs(odd-even));
}
