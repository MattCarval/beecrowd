// Snack

// Using the following table, write a program that reads a code and the
//  amount of an item. After, print the value to pay. This is a very
//  simple program with the only intention of practice of selection
//  commands.

// _______________________________________
//  CODE       SPECIFICATION       PRICE
// _______________________________________
//  1          HOTDOG              R$ 4.00
//  2          X-SALAD             R$ 4.50
//  3          X-BACON             R$ 5.00
//  4          SIMPLE TOAST        R$ 2.00
//  5          SOFT DRINK          R$ 1.50

//  Input
// The input file contains two integer numbers X and Y. X is the product
//  code and Y is the quantity of this item according to the above table.

// Output
// The output must be a message "Total: R$ " followed by the total value
//  to be paid, with 2 digits after the decimal point.

// Input Sample	    Output Sample
// 3 2              Total: R$ 10.00

// 4 3              Total: R$ 6.00

// 2 3              Total: R$ 13.50

#include <stdio.h>

int main() {
  int itemId, quantity, adjustedIndex = 1;
  double total, items[] = {4.00, 4.50, 5.00, 2.00, 1.50};

  scanf("%d %d", &itemId, &quantity);

  itemId -= adjustedIndex;

  total = items[itemId] * (double)quantity;

  printf("Total: R$ %.2lf\n", total);
  return 0;
}