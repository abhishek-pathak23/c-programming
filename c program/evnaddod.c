#include<stdio.h>
int main ()
{
    int n,sume=0,sumo=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    if(a[i]%2==0)
    {
        sume=sume+a[i];
    }
    else{
         sumo=sumo+a[i];
    }
    printf("Evens are: %d\n",sume);
    printf("Odds are: %d\n",sumo);

return 0;    
}