#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("biden's votes in 10 state : ");
    for(int i=0;i<10;i++)
      scanf("%d",&a[i]);
    printf("Trump's vote in 10 states : ");
    for(int i=0;i<10;i++)
      scanf("%d",&b[i]);
     //state wise calulation.
     for(int i=0;i<10;i++)
      {
        if(a[i]>b[i])
         printf("in %d Biden wins\n",i);
        else if(a[i]<b[i])
         printf("in %d Trump wins\n",i);
        else if(a[i]==b[i])
         printf("in %d Draw\n",i);
      }
     // overall winner.
     int sumb=0,sumt=0;
      for(int i=0;i<10;i++)
       {
         sumb=sumb+a[i];
         sumt=sumt+b[i];
       }
       if(sumb>sumt)
       printf("Biden wins\n");
       else
       printf("trump wins\n");
return 0;
}