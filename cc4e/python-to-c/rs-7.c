#include <stdio.h>

/*
Exercise RS-7: Write a C program to determine the minimum and maximum of a sequence of integer numbers on input, 
terminated by the string "done". The patterns for input and output should match the following Python application. 
Make sure that the input lines can be at least 1000 characters. 
Use a middle-tested while loop, gets() and atoi() to mimic the Python code below. See the lecture for guidance.

maxval = None
minval = None
while True:
    line = input()
    line = line.strip()
    if line == "done" : break
    ival = int(line)
    if ( maxval is None or ival > maxval) :
        maxval = ival
    if ( minval is None or ival < minval) :
        minval = ival

print('Maximum', maxval)
print('Minimum', minval)
*/

int main() {
	int min;
	int max;


	while (true) {
	char line[1001];
	// scanf("%1000s", &line)
	fgets(line, 1000, stdin)	
	}
};