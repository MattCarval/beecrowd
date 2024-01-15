#include <stdio.h>

int main() {
  double radius, result, pi = 3.14159;

  scanf("%lf", &radius);

  result = (4/3.0) * pi * (radius * radius * radius);

  printf("VOLUME = %.3lf\n", result);

  return 0;
}