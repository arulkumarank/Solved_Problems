#include <stdio.h>
int main (){
    int a,b;
    printf("enter a wo digit number : ");
    scanf("%d",&a);
    a=a%10;
    printf("the once place is : %d",a);
    return 0;
}