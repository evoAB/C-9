#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Addition = %d",a+b);
        break;
    case 'b':
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Subtraction = %d",abs(a-b));
        break;
    case 'c':
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Multiplication = %d",a*b);
        break;
    case 'd':
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Division = %.2f",(float)a/b);
        break;
    case 'e':
        break;
    default:
        printf("Invalid Number");
    }
    return 0;
}
