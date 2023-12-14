#include <stdio.h>
#include "./headers/fastExponentiation.h"
#include "./headers/fermatPrimalityTest.h"
#include "./headers/nontrivialSquareRootTest.h"
#include "./headers/MillerRabinPrimalityTest.h"

int main() {
    int n = 41;
    int testBy = 2;
    if (fermatPrimalityTest(n, testBy)) {
        printf("%d is passed fermat test by %d\n", n, testBy);
    } else {
        printf("fail\n");
    }

    if (nontrivialSquareRootTest(n)) {
        printf("%d is passed nontrivial Square Root Test\n", n);
    } else {
        printf("fail\n");
    }
    if (MillerRabinPrimalityTest(n, testBy)) {
        printf("%d is passed MillerRabinPrimality Test by %d\n", n, testBy);
    } else {
        printf("fail\n");
    }

    return 0;
}
