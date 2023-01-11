#include<stdio.h>
int main ()
{
    int a,c=1;
    scanf("%d",&a);
    while(a>0)  //using while
    {
        c=a*c;
        a--;
    }
     for(a;a>0;a--)   //using for...
     {
        c=a*c;
     }

    printf("%d",c);
return 0;
}