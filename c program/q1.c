
#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,z=0;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
      {
        if(a[i]>0)
         {
            b[i]=a[i];
            pos++;
         }
        else if(a[i]<0)
        {
           c[i]=a[i];
           neg++;
        } 
        else if(a[i]==0)
        {
           d[i]=a[i];
           z++;
        }
      }
      for(int i=0;i<n;i++)
       {
         printf("positives %d\n",b[i]);
         printf("negatives %d\n",c[i]);
         printf("zeros %d\n",d[i]);
       }
       printf("%d %d %d",pos,neg,z);
return 0;
}