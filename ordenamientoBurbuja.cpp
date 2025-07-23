

#include <stdio.h>

int main() {
    float ganancias[] = {120.50, -45.30, 200.00, -12.00, 0.00};
    int n = sizeof(ganancias)/sizeof(ganancias[0]);

    for(int i = 0; i < n; i++) {
        if(ganancias[i] > 0) {
            printf("\033[0;32mGanancia positiva: %.2f\033[0m\n", ganancias[i]);  // Verde
        } else if(ganancias[i] < 0) {
            printf("\033[0;31mGanancia negativa: %.2f\033[0m\n", ganancias[i]);  // Rojo
        } else {
            printf("Sin ganancia: %.2f\n", ganancias[i]);  // Neutro
        }
    }

    return 0;
}
