#include <stdio.h>

int main() {
	int guessNum;

	while(scanf("%d", &guessNum) != EOF) {

		// char guessInput[1001];
		// fgets(guessInput, 1000, stdin);
		
		/*
		The format specifier %d tells scanf to expect an integer, 
		and the &number argument provides the address 
		of the number variable where the input will be stored.
		*/
		// printf("enter num : ");
		// scanf("%d", &guessNum);

		if (guessNum == 42) {
			printf("Nice work!\n");
			break;
			}
		else if (guessNum < 42) {
			printf("Too low - guess again\n");
			}
		else if (guessNum > 42) {
			printf("Too high - guess again\n");
			}
	}
}

// while True:
//     try:
//         line = input()
//     except:  # If we get EOF
//         break
//     line = line.strip()
//     guess = int(line)
//     if guess == 42:
//         print('Nice work!')
//         break
//     elif guess < 42 :
//         print('Too low - guess again')
//     else :
//         print('Too high - guess again')