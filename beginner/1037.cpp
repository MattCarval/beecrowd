// Interval

// You must make a program that read a float-point number and print a
// message saying in which of following intervals the number belongs:
// [0,25] (25,50], (50,75], (75,100]. If the read number is less than
// zero or greather than 100, the program must print the message
// “Fora de intervalo” that means "Out of Interval".

// The symbol '(' represents greather than. For example:
// [0,25] indicates numbers between 0 and 25.0000, including both.
// (25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.

// Input
// The input file contains a floating-point number.

// Output
// The output must be a message like following example.

// Input Sample	  Output Sample
// 25.01           Intervalo (25,50]

// 25.00           Intervalo [0,25]

// 100.00          Intervalo (75,100]

// -25.02          Fora de intervalo

#include <stdio.h>

int main() {
  double input, interval[] = {0,25.00, 25.01, 50.00, 50.01, 75.00, 75.01, 100.00};

  scanf("%lf", &input);

  if(input < 0 || input > 100) {
    printf("Fora de intervalo\n");
    return 0;
  }

  if(input >= interval[0] && input <= interval[1]) {
    printf("Intervalo [0,25]\n");
    return 0;
  }

  if(input >= interval[2] && input <= interval[3]) {
    printf("Intervalo (25,50]\n");
    return 0;
  }

  if(input >= interval[4] && input <= interval[5]) {
    printf("Intervalo (50,75]\n");
    return 0;
  }

  printf("Intervalo (75,100]\n");
  return 0;
}