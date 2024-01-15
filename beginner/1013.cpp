#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[3], isBigger;

  scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);

  isBigger = (numbers[0] + numbers[1] + abs(numbers[0] - numbers[1])) / 2;
  isBigger = (isBigger + numbers[2] + abs(isBigger - numbers[2])) / 2;

  printf("%d eh o maior\n", isBigger);

  return 0;
}