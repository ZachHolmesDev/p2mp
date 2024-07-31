/*
This will be provided as input to your program

But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief

Expected output from your program:

29 4
*/
#include <stdio.h>

int main() /* count new lines in input */
{
    int c, nl, spc;
    nl = 0;
    spc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++spc;
    }
    printf("%d %d\n", spc, nl);
}