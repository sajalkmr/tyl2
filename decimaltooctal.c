#include <stdio.h>
int main()
{
    int num;
    int octalArray[32];
    int i = 0;
    printf("Enter a Decimal number:");
    scanf("%d", &num);
    while (num > 0)
    {
        // resultant remainder is stored at given array position
        octalArray[i] = num % 8;
        num = num / 8;
        i++;
    }
    // printing octal array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalArray[j]);
    return 0;
}