#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do produto (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Frios e Laticinios\n");
            break;

        case 2:
            printf("Carnes e Peixes\n");
            break;

        case 3:
            printf("Hortifruti\n");
            break;

        case 4:
            printf("Padaria\n");
            break;

        case 5:
            printf("Bebidas\n");
            break;

        default:
            printf("Codigo invalido\n");
    }

    return 0;
}
