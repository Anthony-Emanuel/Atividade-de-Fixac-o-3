#include <stdio.h>

int main() {
    int opcao;

    printf("===== SISTEMA INTELIGENTE DE ATENDIMENTO =====\n\n");

    printf("Menu de Atendimento:\n\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Encerrar Atendimento\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nSetor selecionado: Suporte Tecnico\n");
            printf("Sua solicitacao sera direcionada para a equipe de tecnologia.\n");
            printf("Atendimento para sistemas, redes, computadores e equipamentos.\n");
            break;

        case 2:
            printf("\nSetor selecionado: Financeiro\n");
            printf("Sua solicitacao sera direcionada para a equipe financeira.\n");
            printf("Atendimento para pagamentos, cobrancas, contratos e faturamento.\n");
            break;

        case 3:
            printf("\nSetor selecionado: Recursos Humanos\n");
            printf("Sua solicitacao sera direcionada para a equipe de Recursos Humanos.\n");
            printf("Atendimento para colaboradores, beneficios e documentos internos.\n");
            break;

        case 4:
            printf("\nSetor selecionado: Comercial\n");
            printf("Sua solicitacao sera direcionada para a equipe comercial.\n");
            printf("Atendimento para propostas, vendas, clientes e negociacoes comerciais.\n");
            break;

        case 5:
            printf("\nEncerrando atendimento... Obrigado pelo contato!\n");
            break;

        default:
            printf("\nOpcao invalida. Escolha um setor disponivel.\n");
    }

    return 0;
}
