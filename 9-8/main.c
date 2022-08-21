#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    switch(n>0)
    {
    case 1:
        printf("It is positive");
        break;
    case 0:
        switch(n)
        {
        case 0:
            printf("It is Zero");
            break;
        default:
            printf("It is negative");
        }
    }
    return 0;
}
