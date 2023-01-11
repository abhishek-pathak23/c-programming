#include<stdio.h>
#include<math.h>
int main ()
{
    int a,count=0,b,c,sum=0,d;
    scanf("%d",&a);
    b=a;
    d=a;

    while(a>0)
    {
        a/=10;
        count++;
    }
    printf("%d\n",count);
    while(b>0)
    {
        c=b%10;
        for(int i=0;i<count;i++)
        {
            c=c*c;
        }
         sum=sum+c;
        //sum=sum+pow(c,count);
         printf("%d\n",sum);
        b/=10;

    }
    printf("%d\n",sum);
    if(sum==d)
    {
        printf("Armstrong");

    }
    else
    printf("not");
    return 0;
}