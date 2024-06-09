#include <stdio.h>

int main() {
  char input[1001];

  printf("Enter Line\n");
  fgets(input, 1000, stdin);
  printf("Line: %s", input);

  return 0;
};