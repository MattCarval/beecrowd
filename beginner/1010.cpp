#include <stdio.h>

int main() {
  int id[2], item[2];
  double value[2], result;

  scanf("%d %d %lf", &id[0], &item[0], &value[0]);
  scanf("%d %d %lf", &id[1], &item[1], &value[1]);

  value[0] *= item[0];
  value[1] *= item[1];
  result = value[0] + value[1];

  printf("VALOR A PAGAR: R$ %.2lf\n", result);
  return 0;
}