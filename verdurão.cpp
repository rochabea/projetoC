#include <stdio.h>

int main() {
    int escolha;
    float kg, preco, valorVendaTotal = 0, lucroTotal = 0;

    printf("Escolha o produto (0 para finalizar a compra):\n");
    printf("------------------------\n");
    printf("1 - Tomate\n");
    printf("------------------------\n");
    printf("2 - Cenoura\n");
    printf("------------------------\n");
    printf("3 - Batata\n");
    printf("------------------------\n");
    printf("4 - Batata Doce\n");
    printf("------------------------\n");
    printf("5 - Abobora\n");
    printf("------------------------\n");
    printf("6 - Cebola\n");
    printf("------------------------\n");
    printf("7 - Chuchu\n");
    printf("------------------------\n");
    printf("8 - Mandioca\n");
    printf("------------------------\n");
    printf("9 - Inhame\n");
    printf("------------------------\n");
    printf("10 - Pimentao\n");
    printf("------------------------\n");
    printf("11 - Cebola Roxa\n");
    printf("------------------------\n");
    printf("12 - Berinjela\n");
    printf("------------------------\n");
    printf("13 - Repolho\n");
    printf("------------------------\n");
    printf("14 - Tomate Cereja\n");
    printf("------------------------\n");

    while (1) {
        scanf("%d", &escolha);

        if (escolha == 0)
            break;

        printf("Digite a quantidade em kg: ");
        scanf("%f", &kg);

        switch (escolha) {
            case 1:
                preco = 8.0;
                break;
            case 2:
                preco = 6.0;
                break;
            case 3:
            case 4:
                preco = 10.0;
                break;
            case 5:
                preco = 16.0;
                break;
            case 6:
                preco = 5.49;
                break;
            case 7:
                preco = 2.49;
                break;
            case 8:
                preco = 4.99;
                break;
            case 9:
                preco = 6.0;
                break;
            case 10:
                preco = 15.0;
                break;
            case 11:
                preco = 7.95;
                break;
            case 12:
                preco = 6.99;
                break;
            case 13:
                preco = 6.99;
                break;
            case 14:
                preco = 9.99;
                break;
            default:
                printf("Escolha invalida.\n");
                return 0;
        }

        float valorVenda = kg * preco;
        float lucro = (kg * preco) - (kg * 5.0); // Exemplo: Custo fixo de 5 reais por kg

        valorVendaTotal += valorVenda;
        lucroTotal += lucro;

        printf("Valor da venda: R$ %.2f\n", valorVenda);
        printf("Lucro: R$ %.2f\n", lucro);
        printf("Percentual de lucro: %.2f%%\n", (lucro / valorVenda) * 100);
        printf("------------------------\n");
    }

    printf("Valor total da venda: R$ %.2f\n", valorVendaTotal);
    printf("Lucro total: R$ %.2f\n", lucroTotal);
    printf("Percentual de lucro total: %.2f%%\n", (lucroTotal / valorVendaTotal) * 100);

    return 0;
}

