#include "../headers/fermatPrimalityTest.h"
#include "../headers/fastExponentiation.h"

int fermatPrimalityTest(int n, int by) {
    if (fastExponentiation(by, n-1, n) == 1) {
        return PROBABLY_PRIME;
    } else {
        return COMPOSITE;
    }
}