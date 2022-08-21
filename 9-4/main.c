#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char s;

    printf("a. Isosceles triangle\nb. Right angled triangle\nc. Equilateral triangle\nd. Exit\n");
    scanf("%c",&s);
    switch(s)
    {
    case 'a':
        printf("Enter length of 3 sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || c==a )
           printf("It is Isosceles triangle");
        else
           printf("It is not Isosceles triangle");
        break;
    case 'b':
        printf("Enter length of 3 sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==b*b+a*a)
            printf("It is Right angled triangle");
        else
            printf("It is not Right angled triangle");
        break;
    case 'c':
        printf("Enter length of 3 sides : ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c)
            printf("It is Equilateral triangle");
        else
            printf("It is not Equilateral triangle");
        break;
    case 'd':
        break;
    default:
        printf("Invalid choice");
    }

    return 0;
}
