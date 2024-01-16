// Bhaskara's Formula

// Read 3 floating-point numbers. After, print the roots of bhaskara’s
//  formula. If it's impossible to calculate the roots because a division
//  by zero or a square root of a negative number, presents the message
//  “Impossivel calcular”.

// Input
// Read 3 floating-point numbers (double) A, B and C.

// Output
// Print the result with 5 digits after the decimal point or the message
//  if it is impossible to calculate.

// Input Samples	  Output Samples
// 10.0 20.1 5.1   R1 = -0.29788
//                 R2 = -1.71212

// 0.0 20.0 5.0    Impossivel calcular

// 10.3 203.0 5.0  R1 = -0.02466
//                 R2 = -19.68408

// 10.0 3.0 5.0    Impossivel calcular

#include <stdio.h>
#include <math.h>

int main() {
    double coefficientA, coefficientB, coefficientC;
    
    scanf("%lf %lf %lf", &coefficientA, &coefficientB, &coefficientC);

    double discriminant = pow(coefficientB, 2) - (4 * coefficientA * coefficientC);
    double denominator = 2.00 * coefficientA;

    if (discriminant < 0.00 || denominator == 0.00) {
        printf("Impossivel calcular\n");
    } else {
        double root1 = (-coefficientB + sqrt(discriminant)) / denominator;
        double root2 = (-coefficientB - sqrt(discriminant)) / denominator;

        printf("R1 = %.5lf\nR2 = %.5lf\n", root1, root2);
    }

    return 0;
}
