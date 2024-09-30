#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (int i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_pointer(void *x) {
    printf("pointer: %p\n", x);
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void show_float(float x) {
    show_bytes((byte_pointer)&x, sizeof(float));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) val;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void main() {
    test_show_bytes(12345);
    const char *m = "mnopqr";
    show_bytes((byte_pointer)m, strlen(m));
    // ival address = &ival = *pval = random 8 bytes
    // *pval is another variable, it has two value: address and real value
    // address of pval = &pval, value of pval = address of ival
    // show_pointer(&ival) take random 8 bytes and call &x another time
    // &x return address of pval, so 53bffbfx -> address of ival
    // fc fb bf 53 f8 00 00 00 -> address
}