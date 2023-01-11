#include<stdio.h>

int main ()
{ 
 int a[5],i;
 float sum =0,avg;
 printf("Enter your values : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
    sum = sum + a[i];
 }
  avg = sum / 5.0;
  printf("average of your numbers are : %.2f",avg);
return 0;

}