#include <stdio.h>

int main() {
    long int i;
    long int ii;
    int count = 0;
    long int primes[10000];
    for (i=2;count < 10001; i++) {
        int isPrime = 1;
        for (ii=0; ii < count; ii ++) {
            if (i%primes[ii] == 0) {
                isPrime = 0;
            }
        }
        if (isPrime) {
            primes[count] = i;
            count++;
        }
    }
    printf("10001th Prime is: %ld", primes[10000]);
    return 0;
}
