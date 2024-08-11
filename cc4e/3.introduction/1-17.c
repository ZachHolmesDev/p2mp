#include <stdio.h>
#include <string.h>

void reverse(t) char t[];
{
	int length = strlen(t);
	// printf("length f %s is : %d\n", t, length);
	char letter;
	char temp[1001];
	
	int i;
	int j;

	// i want to loop through it
	for (i = --length, j = 0; i > -1; i--, j++) {

		letter = t[i];
		t[j] = letter;

		// printf("i = %d\n", i);
		// printf("%c", letter);
	}
	return;
}

int main() {
	char t[1000];
	char *copy();
	void reverse();
	copy("Hello world", t);
	printf("%s\n", t);
	reverse(t);
	printf("%s\n", t);
	reverse(copy("XY", t));
	printf("%s\n", t);
	reverse(copy("Even", t));
	printf("%s\n", t);
	reverse(copy("Odd", t));
	printf("%s\n", t);
	reverse(copy("civic", t));
	printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
	int i;
	for (i = 0; (s2[i] = s1[i]); i++)
		;
	return s2;
}