#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float total;
    printf("Enter units : ");
    scanf("%d",&n);
    switch(n)
    {
    case 0 ... 50:
        total = n*0.5;
        printf("Total electricity Bill : %.2f",total+total*0.2);
        break;
    case 51 ... 100:
        total = 50*0.5+(n-50)*0.75;
        printf("Total electricity Bill : %.2f",total+total*0.2);
        break;
    case 101 ... 250:
        total = 50*0.5+50*0.75+(n-100)*1.2;
        printf("Total electricity Bill : %.2f",total+total*0.2);
        break;
    default:
        total = 50*0.5+50*0.75+150*1.2+(n-250)*1.5;
        printf("Total electricity Bill : %.2f",total+total*0.2);
    }
    return 0;
}
