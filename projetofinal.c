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
	int escolha;
    float kg, preco, valorVendaTotal = 0, lucroTotal = 0;
    char fabricante[100];
    char site[100];
    float telefone;
    char uf[2];
    char descricao[350];

    printf("Escolha o produto (0 para finalizar a compra):\n");
    printf("1 - Tomate\n");
    printf("2 - Cenoura\n");
    printf("3 - Batata\n");
    printf("4 - Batata Doce\n");
    printf("5 - Abobora\n");
    printf("6 - Cebola\n");
    printf("7 - Chuchu\n");
    printf("8 - Mandioca\n");
    printf("9 - Inhame\n");
    printf("10 - Pimentao\n");
    printf("11 - Cebola Roxa\n");
    printf("12 - Berinjela\n");
    printf("13 - Repolho\n");
    printf("14 - Tomate Cereja\n");

    while (1) {
        printf("Informe o codigo do produto que voce tem interesse em saber mais. \nCaso deseja sair desse menu, digite 0. \nDigite o codigo do produto desejado:  ");
        scanf("%d", &escolha);
        printf("------------------------------------------\n");

        if (escolha == 0)
            break;

        printf("Digite a quantidade em kg: ");
        scanf("%f", &kg);

        switch (escolha) {
            case 1:
                preco = 8.0;
                strcpy(fabricante, "Fazendinha Feliz\n");
                strcpy(site, "www.fazendinhafeliz.com");
                telefone = 29976570912;
                strcpy(uf,"BA\n");
                strcpy(descricao, "Na fazendinha Feliz e prouzido o melhor tomate do Brasil, este produto recebeu um premio de qualidade nos ultimos 5 anos.\n");
                break;
            case 2:
                preco = 6.0;
                strcpy(fabricante, "Fazenda da Pascoa\n");
                strcpy(site, "www.fazendadapascoa.com\n");
                telefone = 31912349876;
                strcpy(uf, "MG\n");
                strcpy(descricao, "A fazenda da Pascoa possui uma das maiores producoes de cenoura do pais. Alem de sua grande producao, esse produto possui um alto nivel de qualidade.\n");
                break;
            case 3:
                preco = 7.0;
                strcpy(fabricante, "Fazenda Natureba\n");
                strcpy(site, "www.fazendanatureba.com\n");
                telefone = 35998348076;
                strcpy(uf, "SP\n");
                strcpy(descricao, "A fazenda Natureba se localiza no interior de Sa Paulo e tem como diferencial produtos organicos de alta qualidade. A producao de Batata e elogiada e possui uma grande variedade.\n");
                break;
            case 4:
                preco = 10.0;
                strcpy(fabricante, "Fazenda Natureba\n");
                strcpy(site, "www.fazendanatureba.com\n");
                telefone = 35998348076;
                strcpy(uf, "SP\n");
                strcpy(descricao, "A fazenda Natureba se localiza no interior de Sa Paulo e tem como diferencial produtos organicos de alta qualidade. A producao de Batata e elogiada e possui uma grande variedade.\n");
                break;
            case 5:
                preco = 16.0;
                strcpy(fabricante, "Fazenda Possibilidades\n");
                strcpy(site, "www.fazendapossibilidades.com\n");
                telefone = 52976091247;
                strcpy(uf, "GO\n");
                strcpy(descricao, "A fazenda Possibilidades possui uma plantação especifica para Aboboras, fazendo a sua distribuicao para todo o pais.\n");
                break;
            case 6:
                preco = 5.49;
                strcpy(fabricante, "Fazenda do Seu Jorge\n");
                strcpy(site, "www.fazendadoseujorge.com\n");
                telefone = 41912345678;
                strcpy(uf, "PR\n");
                strcpy(descricao, "A Fazenda do Seu Jorge e uma fazenda tradicional na agricultura brasileira, passando por mais de 10 geracoes. Sua producao de cebola vem recebendo premios mostrando seu nivel de qualidade.\n");
                break;
            case 7:
                preco = 2.49;
                strcpy(fabricante, "Fazenda das Estrelas\n");
                strcpy(site, "www.fazendadasestrelas\n");
                telefone = 42888993408;
                strcpy(uf, "SC\n");
                strcpy(descricao, "A Fazenda das Estrelas e responsavel pela plantacao de chuchus.\n");
                break;
            case 8:
                preco = 4.99;
                strcpy(fabricante, "Mestre D'Armas");
                strcpy(site, "www.mestredarmas.com");
                telefone = 6174859632;
                strcpy(uf, "DF\n");
                strcpy(descricao, "O Mestre D'Armas e o nosso fornecedor de mandioca. Alem de fazenda, este local e um hotel fazenda, que recebe estudantes para estudar sobre o meio ambiente.\n");
                break;
            case 9:
                preco = 6.0;
                strcpy(fabricante, "Plantacao de Estudos da Faculdade do ABC\n");
                strcpy(site, "www.plantacaoestudosfaculculdadeabc\n");
                telefone = 23987641238;
                strcpy(uf, "CE\n");
                strcpy(descricao, "Essa plantacao estuda a evolucao do Inhame e suas possiveis mutacoes.\n");
                break;
            case 10:
                preco = 15.0;
                strcpy(fabricante, "Fazenda Campo da Esperanca\n");
                strcpy(site, "www.fazendacampodaesperanca.com\n");
                telefone = 28976341293;
                strcpy(uf, "SE\n");
                strcpy(descricao, "A Fazenda Campo da Esperanca possui uma das maiores plantacoes de pimentao do pais!\n");
                break;
            case 11:
                preco = 7.95;
                strcpy(fabricante, "Fazenda River Plate\n");
                strcpy(site, "www.fazendariverplate.com\n");
                telefone = 42976543981;
                strcpy(uf, "SC\n");
                strcpy(descricao, "Essa fazenda possui um grande variedade de produtos, mas o produto que teve maior destaque foi a Cebola Roxa.\n");
                break;
            case 12:
                preco = 6.99;
                strcpy(fabricante, "Fazenda Corinthians\n");
                strcpy(site, "www.fazendacorinthians.com\n");
                telefone = 5199876543;
                strcpy(uf, "MT\n");
                strcpy(descricao, "A Fazenda Corinthians se especializou na plantacao de Berinjelas e, consequentemente, se tornou destaque no meio agricultor.\n");
                break;
            case 13:
                preco = 6.99;
                strcpy(fabricante, "Fazendinha do Hulk\n");
                strcpy(site, "www.fazendadohulk.com\n");
                telefone = 32914528796;
                strcpy(uf, "ES\n");
                strcpy(descricao, "A Fazendinha do Hulk e uma importante plantacao de Repolho, servindo de exemplo para outras plantacoes.\n");
                break;
            case 14:
                preco = 9.99;
                strcpy(fabricante, "Fazenda do Seu Januario\n");
                strcpy(site, "www.fazendaseujanuario.com\n");
                telefone = 61996294027;
                strcpy(uf, "DF\n");
                strcpy(descricao, "Na fazenda do Seu Januario os produtos sao produzidos de forma organica. E respeitado o que a agencia sanitaria pede. Sao feitas os melhores tomates cerejas do pais\n");
                break;
            default:
                printf("Escolha invalida.\n");
                return 0;
        }

        float valorVenda = kg * preco;
        float lucro = (kg * preco) - (kg * 5.0); // Exemplo: Custo fixo de 5 reais por kg

        valorVendaTotal += valorVenda;
        lucroTotal += lucro;

        printf("\nO valor desse item e %.2f", preco);
        printf("\nValor da venda: R$ %.2f\n", valorVenda);
        printf("\nLucro: R$ %.2f\n", lucro);
        printf("\nPercentual de lucro: %.2f porcento\n", (lucro / valorVenda) * 100);
        printf("\nNome do fabricante: %s", fabricante);
        printf("\nSite do fabricante: %s", site);
        printf("\nTelefone do fabricante: %.0f", telefone);
        printf("\nUF desse produto: %s", uf);
        printf("\nUma descricao mais detalhada desse item: %s\n", descricao);
        printf("-------------------------\n");
    }

    printf("\nOperacao finalizada");
	
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
