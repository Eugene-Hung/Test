#include "eugene_test.h"

int main()
{
    struct bs
    {
        unsigned int a : 1;
        unsigned int b : 3;
        unsigned int c : 4;
    } bit, *pbit;

    bit.a = 1;
    bit.b = 4;
    bit.c = 15;
    bit.b = bit.b | bit.a;
    printf("%x,%x,%x \n", bit.a, bit.b, bit.c);
    pbit = &bit;
    pbit->a = 0;
    pbit->b &= 3;
    pbit->c |= 1;
    printf("%d,%d,%d \n", pbit->a, pbit->b, pbit->c);
    system("pause");
}
