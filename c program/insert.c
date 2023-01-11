#include<stdio.h>
int main()
{
    int n,p,e;
    scanf("%d",&n);
    int a[n];
    printf("position and element: ");
    scanf("%d %d",&p,&e);
    printf("arrays element : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n;i>p;i--)
        a[i]=a[i-1];
       a[p]=e;
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}