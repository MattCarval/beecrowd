// Banknotes and Coins

// Read a value of floating point with two decimal places. This represents
//  a monetary value. After this, calculate the smallest possible number
//  of notes and coins on which the value can be decomposed. The considered
//  notes are of 100, 50, 20, 10, 5, 2. The possible coins are of
//  1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed
//  by the list of notes and the message “MOEDAS:” followed by the list of
//  coins.

// Input
// The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

// Output
// Print the minimum quantity of banknotes and coins necessary to change the
//  initial value, as the given example.

// Input Sample	  Output Sample
// 576.73          NOTAS:
//                 5 nota(s) de R$ 100.00
//                 1 nota(s) de R$ 50.00
//                 1 nota(s) de R$ 20.00
//                 0 nota(s) de R$ 10.00
//                 1 nota(s) de R$ 5.00
//                 0 nota(s) de R$ 2.00
//                 MOEDAS:
//                 1 moeda(s) de R$ 1.00
//                 1 moeda(s) de R$ 0.50
//                 0 moeda(s) de R$ 0.25
//                 2 moeda(s) de R$ 0.10
//                 0 moeda(s) de R$ 0.05
//                 3 moeda(s) de R$ 0.01

// 4.00            NOTAS:
//                 0 nota(s) de R$ 100.00
//                 0 nota(s) de R$ 50.00
//                 0 nota(s) de R$ 20.00
//                 0 nota(s) de R$ 10.00
//                 0 nota(s) de R$ 5.00
//                 2 nota(s) de R$ 2.00
//                 MOEDAS:
//                 0 moeda(s) de R$ 1.00
//                 0 moeda(s) de R$ 0.50
//                 0 moeda(s) de R$ 0.25
//                 0 moeda(s) de R$ 0.10
//                 0 moeda(s) de R$ 0.05
//                 0 moeda(s) de R$ 0.01

// 91.01           NOTAS:
//                 0 nota(s) de R$ 100.00
//                 1 nota(s) de R$ 50.00
//                 2 nota(s) de R$ 20.00
//                 0 nota(s) de R$ 10.00
//                 0 nota(s) de R$ 5.00
//                 0 nota(s) de R$ 2.00
//                 MOEDAS:
//                 1 moeda(s) de R$ 1.00
//                 0 moeda(s) de R$ 0.50
//                 0 moeda(s) de R$ 0.25
//                 0 moeda(s) de R$ 0.10
//                 0 moeda(s) de R$ 0.05
//                 1 moeda(s) de R$ 0.01

#include <stdio.h>

int main() {
    double value, notes_coins[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int quantity = 0, index;

    scanf("%lf", &value);

    printf("NOTAS:\n");

    // Adding a small value to mitigate floating-point precision issues
    value += 1e-9;

    for (index = 0; notes_coins[index] >= 0.01; index++) {
        quantity = 0;

        while (value >= notes_coins[index]) {
            value -= notes_coins[index];
            quantity++;
        }

        if (notes_coins[index] == 1.0)
            printf("MOEDAS:\n");
        if (notes_coins[index] >= 2.0)
            printf("%d nota(s) de R$ %.2f\n", quantity, notes_coins[index]);
        else
            printf("%d moeda(s) de R$ %.2f\n", quantity, notes_coins[index]);
    }

    return 0;
}
