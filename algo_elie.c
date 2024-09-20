#include <stdio.h>

int main() {
    int n = 5;
    int aireCarre;
    aireCarre = n * n;
    float aireDisque;
    aireDisque = 3.14 * ((n * n) / 4);
    printf("Aire du carre = %d cm2\n", aireCarre);
    printf("Aire du disque = %.2f cm2", aireDisque);
    return 0;
}
aireCarreLongueurHauteur