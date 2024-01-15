#include <stdio.h>

int main() {
  int totalKm;
  double totalFuel, fuelConsumed;

  scanf("%d %lf", &totalKm, &totalFuel);

  fuelConsumed = totalKm / totalFuel;

  printf("%.3lf km/l\n", fuelConsumed);

  return 0;
}