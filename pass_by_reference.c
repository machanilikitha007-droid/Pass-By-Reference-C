#include <stdio.h>

void updateValue(int *number)
{
    *number = 100;
}

int main()
{
    int value = 50;

    printf("Before function call: %d\n", value);

    updateValue(&value);

    printf("After function call: %d\n", value);

    return 0;
}
