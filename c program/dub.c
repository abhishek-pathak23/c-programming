#include<stdio.h>
int main ()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
         {
            if(a[i]==a[j])
             {
                for(int k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
             }
         }       
    }
}