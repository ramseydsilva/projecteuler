#include <stdio.h>
#include "reverse_string.c"

extern void reverse_string(char*);

int isPalindrome(int *digit1, int *digit2) {
	char str2[6];
	char str1[6];
	sprintf(str1, "%d", *digit1**digit2);
	sprintf(str2, "%s", str1);
	reverse_string(str1);
	return strcmp(str1, str2);
}

int main() {
	int digit1 = 999;
	int digit2 = 999;
	int lowestDigit = 0;
	int palindrome;

	for (;digit1>0;digit1--){
		if (digit1 < lowestDigit || digit2 < lowestDigit) break;
		for (;digit2>lowestDigit;digit2--){
			if (isPalindrome(&digit1, &digit2) ==0) {
				if (digit1*digit2 > palindrome) palindrome = digit1*digit2;
				if (lowestDigit ==0) lowestDigit = digit2;
			};
		}
		for(; digit2 < digit1; digit2++) {
			if (isPalindrome(&digit1, &digit2)==0) {
				if (digit1*digit2 > palindrome) palindrome = digit1*digit2;
			}
		}
	}
	printf("%d\n", palindrome);
	return 0;
}

