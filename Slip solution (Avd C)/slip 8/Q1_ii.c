#include <stdio.h>

int main(){
    int n, sum=0,m;
    printf("Enter the Number:: ");
    scanf("%d",&n);
    while (n > 0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("The Sum=%d",sum);

    return 0;
    
}