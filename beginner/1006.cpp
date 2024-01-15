#include <stdio.h>

int main() {
  double firstValue, secondValue, thirdValue, result;

  scanf("%lf %lf %lf", &firstValue, &secondValue, &thirdValue);
  firstValue*= 2.0;
  secondValue*= 3.0;
  thirdValue*= 5.0;
  result = (firstValue + secondValue + thirdValue) / 10.0;

  printf("MEDIA = %.1lf\n", result);

  return 0;
}