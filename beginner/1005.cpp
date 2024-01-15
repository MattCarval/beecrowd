#include <stdio.h>

int main() {
  double firstValue, secondValue, result;

  scanf("%lf %lf", &firstValue, &secondValue);
  firstValue*= 3.5;
  secondValue*= 7.5;
  result = (firstValue + secondValue) / 11.0;

  printf("MEDIA = %.5lf\n", result);

  return 0;
}