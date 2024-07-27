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

// #include <cstdio>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int maxVal = INT_MIN; // Initialize to the smallest possible integer
    int minVal = INT_MAX; // Initialize to the largest possible integer
    char line[1001];
    int inputNum;
	
    // while (1) {    
    //     // take input for int 
    //     gets(line);
    //     // fgets(line, 1000, stdin);
    //     // strip whitespace ?
    //     // Strip trailing newline character
    //     line[strcspn(line, "\n")] = '\0';
    //     // check if done 
    //     if ( strcmp(line, "done") == 0 ) {
    //         break;
    //     }
    //     // convert to int
    //     inputNum = atoi(line);
    //     // check for maxval 
    //     if (inputNum > maxVal) {
    //         maxVal = inputNum;
    //     }
    //     // check for minval
    //     if (inputNum < minVal) {
    //         minVal = inputNum;
    //     }
	// }

    while (gets(line) != NULL) {    
        // Strip trailing newline character
        line[strcspn(line, "\n")] = '\0';
        // check if done 
        if ( strcmp(line, "done") == 0 ) {
            break;
        }
        // convert to int
        inputNum = atoi(line);
        // check for maxval 
        if (inputNum > maxVal || maxVal == 0 ) {
            maxVal = inputNum;
        }
        // check for minval
        if (inputNum < minVal || minVal == 0) {
            minVal = inputNum;
        }
	}
    printf("Maximum %d\n", maxVal);
    printf("Minimum %d\n", minVal);
    return 0;
};

/*
This will be provided as input to your program: Copy 
5
2
9
done

Expected output from your program:
Maximum 9
Minimum 2
*/