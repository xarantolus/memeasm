#include <stdio.h>

void to_hex(unsigned int x)
{
    unsigned int stack[10];
    int stackPtr = -1;

    while (x > 0)
    {
        unsigned int lastByte = x & 0xf;
        stack[++stackPtr] = lastByte;

        x = x >> 4;
    }

    while (stackPtr >= 0)
    {
        unsigned int current = stack[stackPtr--];

        if (current <= 9)
        {
            printf("%c", '0' + current);
        }
        else
        {
            printf("%c", 'a' + current - 10);
        }
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    to_hex(69420);
    return 0;
}
