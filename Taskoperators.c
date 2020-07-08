#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the values of a & b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nSum of a & b:%d",c);
    c=a-b;
    printf("\nDifference of a & b:%d",c);
    c=a*b;
    printf("\nMultiplication of a & b:%d",c);
    c=a/b;
    printf("\nDivision of a & b:%d",c);
    return 0;
}
