#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number:: ");
    scanf("%d",&n);

    if (n % 2 == 0)
    {
        printf("\nThe Number is Even.......",n);
    }else{
        printf("The Number is Odd......\n");
    }
    
}