#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the Two Numbers:: ");
    scanf("%d%d", &a,&b);
    printf("Before Interchange:: a=%d, b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Interchange:: a=%d b=%d",a,b);
}