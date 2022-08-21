#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, year;
    printf("Enter year : ");
    scanf("%d",&year);
    y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;
    switch(y)
    {
        case 1:
            printf("It is a leap year");
            break;
        default:
            printf("It is not a leap year");
    }
    return 0;
}
