#include <stdio.h>
int main (){
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);
    b   = a*3, &b;
    printf("the number is multiplied by 3 : %d",b);
    return 0;
}