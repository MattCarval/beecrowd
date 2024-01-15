#include <stdio.h>

int main () {
  char name[15];
  double salary, totalSales;

  scanf("%s %lf %lf", &name, &salary, &totalSales);

  totalSales *= 0.15;
  salary += totalSales;

  printf("TOTAL = R$ %.2lf\n", salary);

  return 0;
}