#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  float cp,sp;
    float profit,loss;
    float percent;
    int a=25;
    scanf("%f\n%f",&cp,&sp);
    if (cp>sp)
    {   loss=cp-sp;
        percent = (loss/cp)*100;
        printf("Loss\n%.2f ",percent);
        
    }
    else{
        profit=sp-cp;
        percent = (profit/cp)*100;
        printf("Profit\n%.2f",percent);
     
    }
        
    return 0;
}
