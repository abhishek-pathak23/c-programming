#include<stdio.h>
#include<windows.h>


int main ()
{
    int h,m,s;
    int d=1000;// delay of 1000 milisecond
    printf("Set time: ");
    scanf("%d%d%d",&h, &m, &s);
    if (h>12 || m>50 || s>60)
    {
        printf("Error!");
        exit(0);
    }
    while(1)//using infinte loop for anything inside
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59);
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);//clock format 00:00:00
        sleep(d);
        system("cls");
    }   
}