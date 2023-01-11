#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int even[n], odd[n], k1=0, k2=0;
    for(int i=0;i<n;i++)
     if(a[i]%2==0)
     {
        even[k1++] = a[i];
     }
     else
        {odd[k2++] = a[i];}
        printf("EVEN\n");
        for(int i=0;i<k1;i++)
        printf("%d ",even[i]);
        printf("ODD\n");
        for(int i=0;i<k2;i++)
        printf("%d ",odd[i]); 
return 0;  
}

