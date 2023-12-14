#include <stdlib.h>
#include <stdio.h>
#include "../headers/MillerRabinPrimalityTest.h"
#include "../headers/fastExponentiation.h"

int* foo(int n, int a) {
    int* sep = (int *) malloc(sizeof(int) * 2);
    int k = 0;
    while (n % a == 0) {
        n /= a;
        k++;
    }
    sep[0] = n;
    sep[1] = a;
    sep[2] = k;
    return sep;
}

int MillerRabinPrimalityTest(int n, int by) {
    int *sep = foo(n-1, by);
    int x = fastExponentiation(by, sep[0], n);
    if (x == 1 || x == n-1) {
        return PROBABLY_PRIME;
    }
    for (int i = 0; i < sep[2]-1; i++) {
        x = fastExponentiation(x, 2, n);
        if (x == n-1) {
            return PROBABLY_PRIME;
        }
    }
    return COMPOSITE;
}