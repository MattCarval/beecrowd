#include <stdio.h>
#include <math.h>

int main() {
  double x[2], y[2], total;

  scanf("%lf %lf", &x[0], &y[0]);
  scanf("%lf %lf", &x[1], &y[1]);

  total = ((x[1] - x[0]) * (x[1] - x[0])) + ((y[1] - y[0]) * (y[1] - y[0]));
  total = sqrt(total);

  printf("%.4lf\n", total);
  return 0;
}