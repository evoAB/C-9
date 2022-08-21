#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Day number : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Hello Monday");
        break;
    case 2:
        printf("Hello Tuesday");
        break;
    case 3:
        printf("Hello Wednesday");
        break;
    case 4:
        printf("Hello Thursday");
        break;
    case 5:
        printf("Hello Friday");
        break;
    case 6:
        printf("Hello Saturday");
        break;
    case 7:
        printf("Hello Sunday");
        break;
    default:
        printf("Invalid Day");
    }
    return 0;
}
