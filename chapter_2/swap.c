#include <stdio.h>

void swap(int *x, int* y) {
    *y = *x^*y;
    *x = *x^*y;
    *y = *x^*y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1; first < last; first++, last--)
        swap(&a[first], &a[last]);
}

void main() {
    int a[5] = {1, 2, 3, 4, 5};
    reverse_array(a, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);  // Print each element
    }
}