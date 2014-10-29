#include <stdio.h>

int Fib(int prev, int prevPrev) {
	return prev + prevPrev;
}

int main() {
	int sum = 0;
	int prev = 0;
	int prevPrev = 1;
	int val = 0;
	for (;;prev=prevPrev, prevPrev=val) {
		if (prevPrev > 4000000) break;
		val = prev + prevPrev;
		if (val%2==0) {
			sum+=val;
		}
	}
	printf("%d\n", sum);
	return 0;
}

