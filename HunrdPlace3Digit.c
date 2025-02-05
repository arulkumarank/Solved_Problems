#include <stdio.h>
int main (){
    int a,b;
    printf("enter a three digit number : ");
    scanf("%d",&a);
    a=a/100;
    printf("the once place is : %d",a);
    return 0;
}