#include<stdio.h>
#include<math.h>

void square (int n);
void _square (int* k);

int main ()
{
    int number;
     printf("what is your number bsdk : ");
    scanf("%d",&number);
    square (number);
    
    int kuch;
    printf("what is your number bsdk : ");
    scanf("%d",&(kuch));
    _square(&kuch);
 return 0;
}

void square (int n)
{
   
    n = n * n;
    printf("square of your number is : %d\n",n);

}
 void _square(int* kuch)
{
    *kuch = (*kuch) * (*kuch);
    printf("suare of your number is : %d\n", (*kuch));
}