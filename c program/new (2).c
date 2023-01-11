#include<stdio.h>
int main ()
{
    int a,c=0,t1,t2;
    scanf("%d",&a);
    int sum=0;
    t1=a;
    t2=a;
    while (a>0)
    {
        c++;
        a=a/10;
        break;
    }
    while (t1>0)
    {
        int r=t1%10;
        int pow=1;
        for ( int i;i<=c;i++)
        pow =pow*r;
        sum = sum+pow;
        t1=t1/10; 
        break;
    }
    if (sum ==t2)
    printf("Armstrong");
    else
    printf("Not");
return 0;
}
