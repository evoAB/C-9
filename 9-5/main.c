#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter input : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
