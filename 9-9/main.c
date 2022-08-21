#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Even number : ");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0:
        printf("Upper nearest odd number : %d",n+1);
        break;
    default:
        printf("Invalid number");
    }
    return 0;
}
