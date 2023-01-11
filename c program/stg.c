/*#include<stdio.h>
int main ()
{
    int a,b,n,c=0,temp;
    scanf("%d",&a);
    temp=a;

    while (a>0)
    {
      b=a%10;
      n=1;
      for(int i=b;i>0;i--)
         n=n*i;
         c=c+n;
         a=a/10;
    }
    if(temp==c)
    printf("STRONG");
    else 
    printf("Not");
return 0;
}*/


#include<stdio.h>
int main ()
{
    int a,b,c=0,n,temp;
    scanf("%d",&a);
    temp = a;

    while(a>0)
    {
        b=a%10;
        n=1;
        for(int i=b;i>0;i--)
         n=n*i;
        c=c+n;
        a=a/10;
    }
    if (temp==c)
    printf("Strong");
    else
    printf("Not");
return 0;
}