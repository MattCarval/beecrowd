#include <stdio.h>

int main () {
  int id, workedHours;
  double hourlyRate, salary;

  scanf("%d %d %lf", &id, &workedHours, &hourlyRate);

  salary = workedHours * hourlyRate;

  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", id, salary);  

  return 0;
}