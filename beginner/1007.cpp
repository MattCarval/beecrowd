#include <stdio.h>

int main () {
  int firstValue, secondValue, thirdValue, fourthValue, result;

  scanf("%d %d %d %d", &firstValue, &secondValue, &thirdValue, &fourthValue);

  result = (firstValue * secondValue) - (thirdValue * fourthValue);

  printf("DIFERENCA = %d\n", result);

  return 0;
}