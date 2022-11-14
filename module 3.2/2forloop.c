#include <stdio.h>
int main()
{
    int num, i, sum = 0;

    printf("Enter 10 numbers : ");
    scanf("%d", &num);

    // for loop terminates when num is less than i
    for(i = 1; i <= num; ++i)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}