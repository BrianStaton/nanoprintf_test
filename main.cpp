#include <iostream>
#include <stdio.h>
#include "nanoprintf.h"

int main()
{
    char outBuf[256];
    int i = 256;

    npf_snprintf(outBuf, sizeof(outBuf), "Hello World 0x%04X\n", i);
    std::cout << outBuf;
    return 0;
}
