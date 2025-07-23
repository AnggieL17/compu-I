#include <stdio.h>
#include <math.h>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}

int potenciar(int a, int b) {
    return (int)pow(a, b);
}

int raiz(int a) {
    return (int)sqrt(a);
}

int valorAbsoluto(int a) {
    return (int)fabs(a);
}

int main() {
    int respuesta;
    int a, b;
    
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Potenciar\n");
    printf("6. Raiz\n");
    printf("7. Valor absoluto\n");
    printf("8. Salir\n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    
    printf("Seleccione una operacion: ");
    scanf("%d", &respuesta);

    switch (respuesta) {
        case 1:
            printf("resultado: %d\n", sumar(a, b));
            break;
        case 2:
            printf("resultado: %d\n", restar(a, b));
            break;
        case 3:
            printf("resultado: %d\n", multiplicar(a, b));
            break;
        case 4:
            printf("resultado: %d\n", dividir(a, b));
            break;
        case 5:
            printf("resultado: %d\n", potenciar(a, b));
            break;
        case 6:
            printf("resultado: %d\n", raiz(a));
            break;
        case 7:
            printf("resultado: %d\n", valorAbsoluto(a));
            break;
        default:
            printf("saliendo\n");
            break;
    }

    return 0;
}
