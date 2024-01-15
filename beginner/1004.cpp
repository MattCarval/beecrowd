#include <stdio.h>

int main() {
  int firstValue, secondValue, result;

  scanf("%d", &firstValue);
  scanf("%d", &secondValue);

  result = firstValue * secondValue;

  printf("PROD = %d\n", result);

  return 0;
}