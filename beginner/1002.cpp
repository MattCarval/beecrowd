#include <stdio.h>

int main() {
  double input, area, pi = 3.14159;

  scanf("%lf", &input);

  area = pi * (input * input);

  printf("A=%.4lf\n", area);

  return 0;
}