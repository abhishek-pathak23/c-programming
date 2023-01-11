#include<stdio.h>
int main()
{
      int n,e;
    scanf("%d",&n);
      int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      scanf("%d",&e);
    for(int i=0;i<n;i++)  
     {
        if(a[i]==e)
        a[i]=a[i+1];
     }
     for(int i=0;i<n-1;i++)
     printf("%d ",a[i]);
 return 0;
} 