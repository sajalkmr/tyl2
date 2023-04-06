#include <stdio.h>
int main()
{
    int num;
    char choice;
    do
    {
        printf("Enter an int number :");
        scanf("%d", &num);
        if (num == 0)
            printf("Number is 0.");
        else if (num > 0)
            printf("Number is positive.");
        else
            printf("Number is negative.");
        printf("\n\nWant to check again (press Y/y for 'yes') :");
        fflush(stdin);
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}