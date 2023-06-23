#include <stdio.h>
#include <string.h>

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
                strcpy(fabricante, "Fazendinha Feliz");
                strcpy(site, "www.fazendinhafeliz.com");
                telefone = 29976570912;
                strcpy(uf,"BA");
                strcpy(descricao, "Na fazendinha Feliz e prouzido o melhor tomate do Brasil, este produto recebeu um premio de qualidade nos ultimos 5 anos.");
                break;
            case 2:
                preco = 6.0;
                strcpy(fabricante, "Fazenda da Pascoa");
                strcpy(site, "www.fazendadapascoa.com");
                telefone = 31912349876;
                strcpy(uf, "MG");
                strcpy(descricao, "A fazenda da Pascoa possui uma das maiores producoes de cenoura do pais. Alem de sua grande producao, esse produto possui um alto nivel de qualidade.");
                break;
            case 3:
                preco = 7.0;
                strcpy(fabricante, "Fazenda Natureba");
                strcpy(site, "www.fazendanatureba.com");
                telefone = 35998348076;
                strcpy(uf, "SP");
                strcpy(descricao, "A fazenda Natureba se localiza no interior de Sa Paulo e tem como diferencial produtos organicos de alta qualidade. A producao de Batata e elogiada e possui uma grande variedade.");
                break;
            case 4:
                preco = 10.0;
                strcpy(fabricante, "Fazenda Natureba");
                strcpy(site, "www.fazendanatureba.com");
                telefone = 35998348076;
                strcpy(uf, "SP");
                strcpy(descricao, "A fazenda Natureba se localiza no interior de Sa Paulo e tem como diferencial produtos organicos de alta qualidade. A producao de Batata e elogiada e possui uma grande variedade.");
                break;
            case 5:
                preco = 16.0;
                strcpy(fabricante, "Fazenda Possibilidades");
                strcpy(site, "www.fazendapossibilidades.com");
                telefone = 52976091247;
                strcpy(uf, "GO");
                strcpy(descricao, "A fazenda Possibilidades possui uma plantação especifica para Aboboras, fazendo a sua distribuicao para todo o pais.");
                break;
            case 6:
                preco = 5.49;
                strcpy(fabricante, "Fazenda do Seu Jorge");
                strcpy(site, "www.fazendadoseujorge.com");
                telefone = 41912345678;
                strcpy(uf, "PR");
                strcpy(descricao, "A Fazenda do Seu Jorge e uma fazenda tradicional na agricultura brasileira, passando por mais de 10 geracoes. Sua producao de cebola vem recebendo premios mostrando seu nivel de qualidade.");
                break;
            case 7:
                preco = 2.49;
                strcpy(fabricante, "Fazenda das Estrelas");
                strcpy(site, "www.fazendadasestrelas");
                telefone = 42888993408;
                strcpy(uf, "SC");
                strcpy(descricao, "A Fazenda das Estrelas e responsavel pela plantacao de chuchus.");
                break;
            case 8:
                preco = 4.99;
                strcpy(fabricante, "Mestre D'Armas");
                strcpy(site, "www.mestredarmas.com");
                telefone = 6174859632;
                strcpy(uf, "DF");
                strcpy(descricao, "O Mestre D'Armas e o nosso fornecedor de mandioca. Alem de fazenda, este local e um hotel fazenda, que recebe estudantes para estudar sobre o meio ambiente.");
                break;
            case 9:
                preco = 6.0;
                strcpy(fabricante, "Plantacao de Estudos da Faculdade do ABC");
                strcpy(site, "www.plantacaoestudosfaculculdadeabc");
                telefone = 23987641238;
                strcpy(uf, "CE");
                strcpy(descricao, "Essa plantacao estuda a evolucao do Inhame e suas possiveis mutacoes.");
                break;
            case 10:
                preco = 15.0;
                strcpy(fabricante, "Fazenda Campo da Esperanca");
                strcpy(site, "www.fazendacampodaesperanca.com");
                telefone = 28976341293;
                strcpy(uf, "SE");
                strcpy(descricao, "A Fazenda Campo da Esperanca possui uma das maiores plantacoes de pimentao do pais!");
                break;
            case 11:
                preco = 7.95;
                strcpy(fabricante, "Fazenda River Plate");
                strcpy(site, "www.fazendariverplate.com");
                telefone = 42976543981;
                strcpy(uf, "SC");
                strcpy(descricao, "Essa fazenda possui um grande variedade de produtos, mas o produto que teve maior destaque foi a Cebola Roxa.");
                break;
            case 12:
                preco = 6.99;
                strcpy(fabricante, "Fazenda Corinthians");
                strcpy(site, "www.fazendacorinthians.com");
                telefone = 5199876543;
                strcpy(uf, "MT");
                strcpy(descricao, "A Fazenda Corinthians se especializou na plantacao de Berinjelas e, consequentemente, se tornou destaque no meio agricultor.");
                break;
            case 13:
                preco = 6.99;
                strcpy(fabricante, "Fazendinha do Hulk");
                strcpy(site, "www.fazendadohulk.com");
                telefone = 32914528796;
                strcpy(uf, "ES");
                strcpy(descricao, "A Fazendinha do Hulk e uma importante plantacao de Repolho, servindo de exemplo para outras plantacoes.");
                break;
            case 14:
                preco = 9.99;
                strcpy(fabricante, "Fazenda do Seu Januario");
                strcpy(site, "www.fazendaseujanuario.com");
                telefone = 61996294027;
                strcpy(uf, "DF");
                strcpy(descricao, "Na fazenda do Seu Januario os produtos sao produzidos de forma organica. E respeitado o que a agencia sanitaria pede. Sao feitas os melhores tomates cerejas do pais");
                break;
            default:
                printf("Escolha invalida.\n");
                return 0;
        }

        float valorVenda = kg * preco;
        float lucro = (kg * preco) - (kg * 5.0); // Exemplo: Custo fixo de 5 reais por kg

        valorVendaTotal += valorVenda;
        lucroTotal += lucro;

        printf("O valor desse item e %.2f", preco);
        printf("\nValor da venda: R$ %.2f\n", valorVenda);
        printf("Lucro: R$ %.2f\n", lucro);
        printf("Percentual de lucro: %.2f porcento", (lucro / valorVenda) * 100);
        printf("\nNome do fabricante: %s", fabricante);
        printf("\nSite do fabricante: %s", site);
        printf("\nTelefone do fabricante: %.0f", telefone);
        printf("\nUF desse produto: %s", uf);
        printf("\nUma descricao mais detalhada desse item: %s\n", descricao);
        printf("-------------------------\n");
    }

    printf("\nOperacao finalizada");

    return 0;
}

