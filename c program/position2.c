#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    printf("Enter the position: ");
    scanf("%d",&b);
    if(b<=n)
    printf("%d",a[b]);
    else
    printf("Not found");
return 0;
}
