#import <stdio.h>

int main() {
	// char input[101];
	int usf;
	int euf;

	// printf("hello\n");
	printf("Enter US Floor\n");
	scanf("%d", &usf);

	euf = usf - 1;

	printf("EU Floor %d\n", euf);
	return 0;
};