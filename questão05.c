#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorPagar;
    int pagamento;

    printf("===== SISTEMA DE CALCULO DE DESCONTO =====\n\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nFormas de Pagamento disponiveis:\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n");

    printf("\nEscolha a forma de pagamento: ");
    scanf("%d", &pagamento);

    switch (pagamento) {
        case 1:
            percentualDesconto = 20.0;
            break;

        case 2:
            percentualDesconto = 15.0;
            break;

        case 3:
            percentualDesconto = 5.0;
            break;

        default:
            printf("\nForma de pagamento invalida!\n");
            return 0;
    }

    valorDesconto = valorCompra * (percentualDesconto / 100);
    valorPagar = valorCompra - valorDesconto;

    printf("\n===== RESUMO DA COMPRA =====\n");

    switch (pagamento) {
        case 1:
            printf("Sua forma de pagamento escolhida foi: PIX\n");
            break;

        case 2:
            printf("Sua forma de pagamento escolhida foi: Debito\n");
            break;

        case 3:
            printf("Sua forma de pagamento escolhida foi: Credito\n");
            break;
    }

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
