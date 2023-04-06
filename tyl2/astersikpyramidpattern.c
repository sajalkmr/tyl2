#include <stdio.h>
void main()
{
    int i, j, space, rows, k;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    space = rows + 4 - 1;
    for (i = 1; i <= rows; i++)
    {
        for (k = space; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
        space--;
    }
}