// The Greatest

// Make a program that reads 3 integer values and present the greatest one
//  followed by the message "eh o maior". Use the following formula:

//  (a+b+abs(a-b)) / 2

//  Input
// The input file contains 3 integer values.

// Output
// Print the greatest of these three values followed by a space and the message
//  “eh o maior”.

// Input Samples	  Output Samples
// 7 14 106        106 eh o maior

// 217 14 6        217 eh o maior

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[3], isBigger;

  scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);

  isBigger = (numbers[0] + numbers[1] + abs(numbers[0] - numbers[1])) / 2;
  isBigger = (isBigger + numbers[2] + abs(isBigger - numbers[2])) / 2;

  printf("%d eh o maior\n", isBigger);

  return 0;
}