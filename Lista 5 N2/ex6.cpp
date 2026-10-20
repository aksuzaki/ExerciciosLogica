#include <stdio.h>

int escolherPagamento() {
    int opcao;

    printf("\n1 - A vista com 10%% de desconto\n");
    printf("2 - Em 2 vezes\n");
    printf("3 - De 3 a 10 vezes com juros\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    return opcao;
}

float pagamentoVista(float total) {
    return total * 0.90;
}

float pagamentoDuasVezes(float total) {
    return total / 2.0;
}

float pagamentoParcelado(float total, int parcelas) {
    return total * (1.0 + 0.03 * parcelas);
}

int main() {
    float total, resultado;
    int opcao, parcelas;

    printf("Total da compra: R$ ");
    scanf("%f", &total);

    opcao = escolherPagamento();

    switch (opcao) {
        case 1:
            resultado = pagamentoVista(total);
            printf("Total a vista: R$ %.2f\n", resultado);
            break;

        case 2:
            resultado = pagamentoDuasVezes(total);
            printf("2 parcelas de R$ %.2f\n", resultado);
            printf("Total: R$ %.2f\n", total);
            break;

        case 3:
            if (total <= 100.0) {
                printf("Compra deve ser acima de R$ 100,00.\n");
                break;
            }

            printf("Quantidade de parcelas (3 a 10): ");
            scanf("%d", &parcelas);

            if (parcelas < 3 || parcelas > 10) {
                printf("Quantidade invalida!\n");
                break;
            }

            resultado = pagamentoParcelado(total, parcelas);

            printf("Total com juros: R$ %.2f\n", resultado);
            printf("Cada parcela: R$ %.2f\n",
                   resultado / parcelas);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

