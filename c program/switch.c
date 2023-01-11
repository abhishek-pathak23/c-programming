#include<stdio.h>
int main ()
{
   char name;
    printf("Enter first letter of the name : "); 
    scanf("%s",&name);
/*
a-apple
b-ball
c-cat
d-dog
e-egg
*/
switch (name)
{
    case 'a' : printf("Apple\n");
      break;
    case 'b' : printf("Ball\n");
      break;
     case 'c' : printf("Cat\n");
      break;
     case 'd' : printf("Dog\n");
      break;
     case 'e' : printf("Egg\n");
      break;
    default : printf("Not in dictionary\n");

}    
    return 0;
}