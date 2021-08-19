#include <stdio.h>

void to_binary(unsigned int x)
{
    unsigned int stack[32];
    int stackPtr = -1;

    while (x > 0)
    {
        unsigned int lastByte = x & 0x1;
        stack[++stackPtr] = lastByte;

        x = x >> 1;
    }

    while (stackPtr >= 0)
    {
        printf("%c", 48 + stack[stackPtr--]);
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    to_binary(69420);
    return 0;
}
