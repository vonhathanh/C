#include <stdio.h>

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return x & m;
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) {
    int result = 1;
    return result;
}

void main() {
    int x = 0x87654321; // 10000111011001010100001100100001
                        // 01111000100110101011110011011110
    printf("%x\n %x\n %x\n", x&0xFF, x^(~0-0xFF), x|0xFF); // x^(~0&~0xFF)
    printf("%x", bool_or(8, 2));
}