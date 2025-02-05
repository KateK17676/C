#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(n) {
	int d = 0;
	int n_1 = n;
	while (n > 0){
		d = d * 10 + n % 10;
		n = n / 10;
	}
	if (d == n_1)
		return 1;
	else
		return 0;
}

int main(int argc, char* argv[])
{
	int a, b;
	int k = 0;

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (is_palindrome(i) == 1)
			k++;
	}
	printf("%d", k);


	return 0;
}