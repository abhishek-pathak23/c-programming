#include<stdio.h>

int sum(int x,int y);
void table (int table);

int main() 
{
  int a;
  printf("first number : ");
  scanf("%d",&a);

  int b;
  printf("second number : ");
  scanf("%d",&b);

  sum(a,b);
  printf("\n");
  int t;
  printf("Enter the table : ");
  scanf("%d",&t);

  table(t);
 
 return 0;
}
int sum (int x,int y){
   int sum = x + y;
   printf("the sum is : %d", sum);
}
void table(int table) {
      int t;
      for( t=1; t<=10; t++){
         printf("%d\n",t*table);
      }
}