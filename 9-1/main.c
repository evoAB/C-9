#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of month : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Janauary 31days");
        break;
    case 2:
        printf("February 28/29days");
        break;
    case 3:
        printf("March 31days");
        break;
    case 4:
        printf("April 30days");
        break;
    case 5:
        printf("May 31days");
        break;
    case 6:
        printf("June 30days");
        break;
    case 7:
        printf("July 31days");
        break;
    case 8:
        printf("August 31days");
        break;
    case 9:
        printf("September 30days");
        break;
    case 10:
        printf("October 31days");
        break;
    case 11:
        printf("November 30days");
        break;
    case 12:
        printf("December 31days");
        break;
    default:
        printf("Invalid Month");
    }
    return 0;
}
