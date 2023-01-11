#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

if (marks >30 && marks < 100)
{
    printf("A++  aa\n");
}
else if (marks < 30 && marks>0)
{
    printf("Fail\n");

}
else 
{
    printf("invalid marks\n");
}
return 0;
}
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter marks : ");
//     scanf("%d",&marks);

//     switch (marks){
//         case (marks >= 90 && marks <100) :
//         printf
//     }
