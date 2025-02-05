#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    c = a+b,&c;
    printf("the addiion of these numbers are : %d",c);
    return 0;
}