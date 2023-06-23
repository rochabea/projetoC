#include <stdio.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    //criando e incializando
    tipo_pessoa pes = {0, 0.0, "teste"};

    printf("inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "texto");

    printf("\nAlterando os campos via código: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //solicitando inserções via teclado
    printf("\nInsira um número inteiro: \n");
    scanf("%d", &pes.idade);
    printf("\nInsira um numero real: \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("\nInsira uma palavra: \n");
    scanf("%s", &pes.nome);

}