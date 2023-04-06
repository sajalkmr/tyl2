#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i, sum = 0, v, position = -1;
    for (i = 0; i < 5; i++)
    {
        printf("enter a number in matrix:");
        scanf("%d", &a[i]);
    }
    printf("\nenter a number to search :");
    scanf("%d", &v);
    for (i = 0; i < 5; i++)
    {
        if (v == a[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        printf(" \nvalue does not exist");
    }
    else
        printf("\n value exist at position= %d", position);
    return 1;
}