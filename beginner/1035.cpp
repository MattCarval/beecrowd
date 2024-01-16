#include <stdio.h>

int main() {
    int numA, numB, numC, numD;

    scanf("%d%d%d%d", &numA, &numB, &numC, &numD);

    if (numB > numC && numD > numA && (numC + numD) > (numA + numB) && numC > 0 && numD > 0 && numA % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
