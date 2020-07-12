#include <stdio.h>
#include <stdlib.h>

int main()
{
    int per=0;
    printf("\nEnter the percentage:");
    scanf("%d",&per);
    if(per>100)
    {
        printf("\nInvalid input");
    }
    else
    {
        if(per<=100 && per>80)
        {
            printf("\nGrade A");
        }
        else if(per>=70 && per<80)
        {
            printf("\nGrade B");
        }
        else if(per>=60 && per<70)
        {
            printf("\nGrade C");
        }
        else if(per>=45 && per<60)
        {
            printf("\nGrade D");
        }
        else if(per<45)
        {
            printf("\nFAIL");
        }
    }
    return 0;
}
