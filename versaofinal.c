#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRODUTOS 100

typedef struct {
    char estado[3];
    char marca[50];
    char produto[50];
    float preco;
} Produto;

void listarMarcas(Produto produtos[], int numProdutos) {
    int i;
    printf("=== Lista de Marcas ===\n");
    for (i = 0; i < numProdutos; i++) {
        printf("%s\n", produtos[i].marca);
    }
    printf("======================\n");
}

void listarProdutos(Produto produtos[], int numProdutos) {
    int i;
    printf("=== Lista de Produtos ===\n");
    for (i = 0; i < numProdutos; i++) {
        printf("%s\n", produtos[i].produto);
    }
    printf("=========================\n");
}

void listarProdutosEstado(Produto produtos[], int numProdutos, char estado[]) {
    int i;
    printf("=== Produtos do Estado %s ===\n", estado);
    for (i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].estado, estado) == 0) {
            printf("%s\n", produtos[i].produto);
        }
    }
    printf("=============================\n");
}

void listarProdutosMarca(Produto produtos[], int numProdutos, char marca[]) {
    int i;
    printf("=== Produtos da Marca %s ===\n", marca);
    for (i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].marca, marca) == 0) {
            printf("%s\n", produtos[i].produto);
        }
    }
    printf("=============================\n");
}

void estadoProdutoMaisCaro(Produto produtos[], int numProdutos) {
    float precoMaisCaro = 0;
    char estadoMaisCaro[3];
    int i;
    
    for (i = 0; i < numProdutos; i++) {
        if (produtos[i].preco > precoMaisCaro) {
            precoMaisCaro = produtos[i].preco;
            strcpy(estadoMaisCaro, produtos[i].estado);
        }
    }
    
    printf("=== Estado(s) com Produto Mais Caro ===\n");
    for (i = 0; i < numProdutos; i++) {
        if (produtos[i].preco == precoMaisCaro) {
            printf("%s\n", produtos[i].estado);
        }
    }
    printf("===============================\n");
}

void fabricanteProdutoMaisBarato(Produto produtos[], int numProdutos) {
    float precoMaisBarato = produtos[0].preco;
    int i;
    
    for (i = 1; i < numProdutos; i++) {
        if (produtos[i].preco < precoMaisBarato) {
            precoMaisBarato = produtos[i].preco;
        }
    }
    
    printf("=== Fabricante(s) com Produto Mais Barato ===\n");
    for (i = 0; i < numProdutos; i++) {
        if (produtos[i].preco == precoMaisBarato) {
            printf("%s\n", produtos[i].marca);
        }
    }
    printf("=====================================\n");
}

void ordenarProdutosPorPreco(Produto produtos[], int numProdutos) {
    int i, j;
    Produto temp;
    
    for (i = 0; i < numProdutos - 1; i++) {
        for (j = 0; j < numProdutos - i - 1; j++) {
            if (produtos[j].preco > produtos[j + 1].preco) {
                temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
    
    printf("=== Produtos em Ordem Crescente de Valor ===\n");
    for (i = 0; i < numProdutos; i++) {
        printf("%s - R$ %.2f\n", produtos[i].produto, produtos[i].preco);
    }
    printf("===========================================\n");
}

void ordenarProdutosPorLucro(Produto produtos[], int numProdutos) {
    int i, j;
    Produto temp;
    
    for (i = 0; i < numProdutos - 1; i++) {
        for (j = 0; j < numProdutos - i - 1; j++) {
            float lucro1 = produtos[j].preco - 5.0; 
            float lucro2 = produtos[j + 1].preco - 5.0;
            
            if (lucro1 > lucro2) {
                temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
    
    printf("=== Produtos em Ordem Crescente de Maior Valor do Lucro ===\n");
    for (i = 0; i < numProdutos; i++) {
        float lucro = produtos[i].preco - 5.0; 
        printf("%s - Lucro: R$ %.2f\n", produtos[i].produto, lucro);
    }
    printf("=========================================================\n");
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int numProdutos = 14;
    
    strcpy(produtos[0].estado, "BA");
    strcpy(produtos[0].marca, "Fazendinha Feliz");
    strcpy(produtos[0].produto, "Tomate");
    produtos[0].preco = 8.0;

    strcpy(produtos[1].estado, "MG");
    strcpy(produtos[1].marca, "Fazenda da Pascoa");
    strcpy(produtos[1].produto, "Cenoura");
    produtos[1].preco = 6.0 ;
    
    strcpy(produtos[2].estado, "SP");
    strcpy(produtos[2].marca, "Fazenda Natureba");
    strcpy(produtos[2].produto, "Batata");
    produtos[2].preco = 7.0;
    
    strcpy(produtos[3].estado, "MG");
    strcpy(produtos[3].marca, "Fazenda Possibilidades");
    strcpy(produtos[3].produto, "Batata Doce");
    produtos[3].preco = 10.0;
    
    strcpy(produtos[4].estado, "GO");
    strcpy(produtos[4].marca, "Fazenda Natureba");
    strcpy(produtos[4].produto, "Abobora");
    produtos[4].preco = 16.0;
    
    strcpy(produtos[5].estado, "PR");
    strcpy(produtos[5].marca, "Fazenda do Seu Jorge");
    strcpy(produtos[5].produto, "Cebola");
    produtos[5].preco = 5.49;
    
    strcpy(produtos[6].estado, "SC");
    strcpy(produtos[6].marca, "Fazenda das Estrelas");
    strcpy(produtos[6].produto, "Chuchu");
    produtos[6].preco = 2.49 ;
    
    strcpy(produtos[7].estado, "DF");
    strcpy(produtos[7].marca, "Mestre D'Armas");
    strcpy(produtos[7].produto, "Mandioca");
    produtos[7].preco = 4.99;
    
    strcpy(produtos[8].estado, "CE");
    strcpy(produtos[8].marca, "Plantacao de Estudos da Faculdade do ABC");
    strcpy(produtos[8].produto, "Inhame");
    produtos[8].preco = 6.0;
    
    strcpy(produtos[9].estado, "SE");
    strcpy(produtos[9].marca, "Fazenda Campo da Esperanca");
    strcpy(produtos[9].produto, "Pimentao");
    produtos[9].preco = 15.0;
    
    strcpy(produtos[10].estado, "SC");
    strcpy(produtos[10].marca, "Fazenda River Plate");
    strcpy(produtos[10].produto, "Cebola Roxa");
    produtos[10].preco = 7.95;
    
    strcpy(produtos[11].estado, "MT");
    strcpy(produtos[11].marca, "Fazenda Corinthians");
    strcpy(produtos[11].produto, "Berinjela");
    produtos[11].preco = 6.99;
    
    strcpy(produtos[12].estado, "ES");
    strcpy(produtos[12].marca, "Fazendinha do Hulk");
    strcpy(produtos[12].produto, "Repolho");
    produtos[12].preco = 6.99;

    
    strcpy(produtos[13].estado, "DF");
    strcpy(produtos[13].marca, "Fazenda do Seu Januario");
    strcpy(produtos[13].produto, "Tomate Cereja");
    produtos[13].preco = 9.99;

    int opcao;
    
    do {
        printf("\n=== Menu ===\n");
        printf("1. Listar todas as marcas\n");
        printf("2. Listar todos os produtos\n");
        printf("3. Listar os produtos de um determinado estado\n");
        printf("4. Listar os produtos de uma determinada marca\n");
        printf("5. Apresentar o(s) estado(s) onde esta registrado o produto mais caro\n");
        printf("6. Apresentar o(s) fabricante(s) onde esta registrado o produto mais barato\n");
        printf("7. Listar todos os produtos em ordem crescente de valor\n");
        printf("8. Listar todos os produtos em ordem crescente de maior \"valor do lucro\"\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                listarMarcas(produtos, numProdutos);
                break;
            case 2:
                listarProdutos(produtos, numProdutos);
                break;
            case 3:
                printf("Digite o estado: ");
                char estado[3];
                scanf("%s", estado);
                listarProdutosEstado(produtos, numProdutos, estado);
                break;
            case 4:
                printf("Digite a marca: ");
                char marca[50];
                scanf(" %[^\n]s", marca);
                listarProdutosMarca(produtos, numProdutos, marca);
                break;
            case 5:
                estadoProdutoMaisCaro(produtos, numProdutos);
                break;
            case 6:
                fabricanteProdutoMaisBarato(produtos, numProdutos);
                break;
            case 7:
                ordenarProdutosPorPreco(produtos, numProdutos);
                break;
            case 8:
                ordenarProdutosPorLucro(produtos, numProdutos);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
