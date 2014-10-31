#include <stdio.h>

int main() {
    int i;
    long int sqSum = 0;
    int sum = 0;
    long int sumSq = 0;
    for (i=1; i<=100; i++) {
        sqSum += i*i;
        sum += i;
    }
    sumSq = sum*sum;
    printf("Result: %ld", sumSq-sqSum);
    return 0;
}
