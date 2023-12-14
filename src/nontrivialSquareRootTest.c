#include "../headers/nontrivialSquareRootTest.h"
#include "../headers/fastExponentiation.h"

int nontrivialSquareRootTest(int n) {
    for (int i = 2; i < n/2 + 1; i++) {
        if(fastExponentiation(i, 2, n) == 1) { return COMPOSITE;}
    }
    return PROBABLY_PRIME;
}