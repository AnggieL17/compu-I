#include <stdio.h>

int main() {
    char titulo[10][100] = {
        "La divina comedia",
        "Cien años de soledad",
        "La fundacion",
        "1984"
    };
    char autor[10][100] = {
        "DANTE ALIGHIERI",
        "GABRIEL G. MARQUEZ",
        "ISAAC ASIMOV",
        "GEORGE OWELL"
    };
    char genero[10][100] = {
        "Epopeya",
        "Novela",
        "Novela, sci-fi"
    };
    char isbn[10][14] = {
        "8497945883",
        "8497592204",
        "8484500519",
        "9685270880"
    };
    float precio[10] = {19.00, 25.00, 40.00, 12.00};
    int stock[10] = {100, 150, 125, -23};
    float ganancia[10];
    int contadorLibros = 3;

    int opcion;
    printf("1. Registrar nuevo libro\n");
    printf("2. Buscar un libro por ISBN\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese el titulo del libro: ");
        scanf(" %[^\n]", titulo[contadorLibros]);

        printf("Ingrese el autor del libro: ");
        scanf(" %[^\n]", autor[contadorLibros]);

        printf("Ingrese el genero del libro: ");
        scanf(" %[^\n]", genero[contadorLibros]);

        printf("Ingrese el codigo ISBN: ");
        scanf(" %[^\n]", isbn[contadorLibros]);

        printf("Ingrese la cantidad en stock: ");
        scanf(" %[^\n]", &stock[contadorLibros]);

        printf("Ingrese el precio unitario: ");
        scanf("%f", &precio[contadorLibros]);

        ganancia[contadorLibros] = precio[contadorLibros] * stock[contadorLibros];
        contadorLibros++;

        printf("\n%-25s %-20s %-20s %-15s %-10s %-8s %-10s\n", 
            "TITULO", "AUTOR", "GENERO", "ISBN", "PRECIO", "STOCK", "GANANCIA");
        for (int i = 0; i < contadorLibros; i++) {
            ganancia[i] = precio[i] * stock[i];
            printf("%-25s %-20s %-20s %-15s $%-9.2f %-8d $%-10.2f\n", 
                titulo[i], autor[i], genero[i], isbn[i], 
                precio[i], stock[i], ganancia[i]);
        }
    }
    else if (opcion == 2) {
        char libroAbuscar[14];
        printf("Ingrese el ISBN a buscar: ");
        scanf("%s", libroAbuscar);

        int encontrado = 0;
        for (int i = 0; i < contadorLibros; i++) {
            ganancia[i] = precio[i] * stock[i];
            int igual = 1;
            for (int j = 0; libroAbuscar[j] != '\0'; j++) {
                if (libroAbuscar[j] != isbn[i][j]) {
                    igual = 0;
                    break;
                }
            }

            if (igual) {
                printf("\nResultado:\n");
                printf("Titulo: %s\n", titulo[i]);
                printf("Autor: %s\n", autor[i]);
                printf("Genero: %s\n", genero[i]);
                printf("ISBN: %s\n", isbn[i]);
                printf("Precio: $%.2f\n", precio[i]);
                printf("Stock: %d\n", stock[i]);
                printf("Ganancia: $%.2f\n", ganancia[i]);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("No se encontro ningun libro con el ISBN %s.\n", libroAbuscar);
        }
    }
    else {
        printf("Opcion no valida\n");
    }

    return 0;
}