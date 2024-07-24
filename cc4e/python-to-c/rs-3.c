#include <stdio.h>


// print('Enter name')
// name = input()
// print('Hello', name)

int main() {
    char name[101];
    printf("Enter name\n");
    scanf("%s", name);
    printf("Hello %s\n", name);

    return 0;
}