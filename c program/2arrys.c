#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
     int c[n];  
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2==0)
    {
        int b[n];
        for (int i = 0; i < n; i++)
        printf("%d",b[i]);
    }   
    
    else
        
         for(int i=0;i<n;i++)
        printf("%d",c[i]);

return 0;
}