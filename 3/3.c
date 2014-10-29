#include <stdio.h>

int main() {
	long int num = 600851475143;
	long int largestPrime = num;
	long int prime = num;
	long int multiple = 1;
	int i = 2;
	for (;;i++){
		if (prime % i == 0) {
			largestPrime = i;
			prime = prime / i;
			i=2;
			multiple *= largestPrime;
		}
		if (multiple == num) break;
	}
	printf("%ld\n", largestPrime);
	return 0;
}

