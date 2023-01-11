#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    int a[n];
    printf("array : ");
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("position to delete : ");
      scanf("%d",&p);
    for(int i=p;i<n-1;i++)
       a[i]=a[i+1];
    for(int i=0;i<n-1;i++)
       printf("%d ",a[i]);
return 0;
}