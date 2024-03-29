// Distance Between Two Points

// Read the four values corresponding to the x and y axes of two points in the
// plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them,
// showing four decimal places after the comma, according to the formula:
// Distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)))

// Input
// The input file contains two lines of data. The first one contains two
//  double values: x1 y1 and the second one also contains two double values
//  with one digit after the decimal point: x2 y2.

// Output
// Calculate and print the distance value using the provided formula, with
//  4 digits after the decimal point.

// Input Sample	  Output Sample
// 1.0 7.0         4.4721
// 5.0 9.0

// -2.5 0.4        16.1484
// 12.1 7.3

// 2.5 -0.4        16.4575
// -12.2 7.0

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