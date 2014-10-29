#include <stdio.h>

int main() {
	int i;
	int ii;
	int count;
	long int num = 2;
	long int numt;
	for(i=2;i<=20;i++) {
		if (num%i != 0) {
			for (ii=2; ii<=i; ii++) {
				numt = num*ii;
				if (numt%i==0) {
					num *= ii;
					break;
				}
			}
		}
	}
	printf("%ld\n", num);
}
