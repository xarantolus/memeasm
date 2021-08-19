#include <stdio.h>

void to_octal(unsigned int x)
{
    unsigned int stack[10];
    int stackPtr = -1;

    while (x > 0)
    {
        unsigned int lastOct = x & 0x7;
        stack[++stackPtr] = lastOct;

        x = x >> 3;
    }

    while (stackPtr >= 0)
    {
        printf("%c", 48 + stack[stackPtr--]);
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    to_octal(19358);
    return 0;
}
