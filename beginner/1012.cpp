// Area

// Make a program that reads three floating point values: A, B and C. Then,
//  calculate and show:
// a) the area of the rectangled triangle that has base A and height C.
// b) the area of the radius's circle C. (pi = 3.14159)
// c) the area of the trapezium which has A and B by base, and C by height.
// d) the area of ​​the square that has side B.
// e) the area of the rectangle that has sides A and B.

// Input
// The input file contains three double values with one digit after the decimal
//  point.

// Output
// The output file must contain 5 lines of data. Each line corresponds to one of
//  the areas described above, always with a corresponding message (in Portuguese)
//  and one space between the two points and the value. The value calculated must
//  be presented with 3 digits after the decimal point.

// Input Samples	    Output Samples
// 3.0 4.0 5.2       TRIANGULO: 7.800
//                   CIRCULO: 84.949
//                   TRAPEZIO: 18.200
//                   QUADRADO: 16.000
//                   RETANGULO: 12.000

// 12.7 10.4 15.2    TRIANGULO: 96.520
//                   CIRCULO: 725.833
//                   TRAPEZIO: 175.560
//                   QUADRADO: 108.160
//                   RETANGULO: 132.080

#include <stdio.h>

int main() {
  double area[3], pi = 3.14159, triangle, circle, trapezoid, square, rectangle;

  scanf("%lf %lf %lf", &area[0], &area[1], &area[2]);

  triangle = (1.0/2) * area[0] * area[2];
  circle = pi * (area[2] * area[2]);
  trapezoid = ((area[0] + area[1]) * area[2]) / 2;
  square = area[1] * area[1];
  rectangle = area[0] * area[1];
  

  printf("TRIANGULO: %.3lf\n", triangle);
  printf("CIRCULO: %.3lf\n", circle);
  printf("TRAPEZIO: %.3lf\n", trapezoid);
  printf("QUADRADO: %.3lf\n", square);
  printf("RETANGULO: %.3lf\n", rectangle);

  return 0;
}