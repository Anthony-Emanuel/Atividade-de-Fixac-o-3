#include <stdio.h>

int main() {
    int codigo;

    printf("===== SISTEMA DE GESTAO DE TRANSPORTE =====\n\n");

    printf("Categorias de Veiculos:\n\n");
    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar Sistema\n");

    printf("\nDigite o codigo do veiculo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("\nVeiculo selecionado: Carro\n");
            printf("Finalidade: Transporte de passageiros em pequena quantidade.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;

        case 2:
            printf("\nVeiculo selecionado: Motocicleta\n");
            printf("Finalidade: Entregas rapidas e transporte de pequenas cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;

        case 3:
            printf("\nVeiculo selecionado: Van\n");
            printf("Finalidade: Transporte de passageiros ou pequenas cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;

        case 4:
            printf("\nVeiculo selecionado: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;

        case 5:
            printf("\nVeiculo selecionado: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;

        case 6:
            printf("\nEncerrando sistema... Obrigado!\n");
            break;

        default:
            printf("\nOpcao invalida. Codigo de veiculo inexistente.\n");
    }

    return 0;
}
