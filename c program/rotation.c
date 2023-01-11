#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n],r;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&r);
    r=r%n;
    for(int i=0;i<r;i++)
    {
        int t=a[0];
        for(int j=0;j<n;j++)
        a[j]=a[j+1];
        a[n-1]=t;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}