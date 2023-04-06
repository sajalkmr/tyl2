#include <stdio.h>
int main()
{
    int num;
    // creating an array to store binary equivalent
    int binaryArray[32];
    printf("Enter a Decimal number :");
    scanf("%d", &num);
    int i = 0;
    while (num > 0)
    {
        // resultant remainder is stored at given array position
        binaryArray[i] = num % 2;
        num = num / 2;
        i++;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryArray[j]);
    return 0;
}