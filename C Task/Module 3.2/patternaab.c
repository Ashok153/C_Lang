// A         
// A B       
// A B C     
// A B C D   
// A B C D E

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    return 0;
}