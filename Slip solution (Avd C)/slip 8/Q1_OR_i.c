#include <stdio.h>

int main()

{

    int arr[250], search, n, i;

    printf("Enter how many elements available in an array:: ");

    scanf("%d", &n);

    printf("\nEnter %d numbers or integers one by one:: ", n);

    for (i = 0; i < n; i++)

        scanf("%d", &arr[i]);

    printf("\nEnter the number you want to search:: ");

    scanf("%d", &search);

    for (i = 0; i < n; i++)

    {

        if (arr[i] == search)

        {

            printf("\n%d is present at location %d\n", search, i + 1);

            break;
        }
    }

    if (i == n)

        printf("%d is not available in the array.\n", search);

    return 0;
}