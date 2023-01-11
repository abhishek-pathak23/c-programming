#include<stdio.h>
int main()
{
    int n,pos;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&pos);
    for(int i=0;i<n;i++)
     { if(i==pos)
      printf("%d",a[i]);
      /*else
      {
        printf("invalid\n");
      }*/
     }
return 0;
}