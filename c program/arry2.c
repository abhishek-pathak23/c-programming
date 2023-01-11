#include<stdio.h>
int main ()
{
    int n;
    float sum=0,avg;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    
    if (n<=10)
    {
        int a[n],i;
     printf("Enter the values : \n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
        sum = sum + a[i];
     }
      avg = sum / n;
      printf("Your average : %.2f\n",avg);
    }
    else 
    printf("Excess values! Please enter less than 10");
    return 0;
}