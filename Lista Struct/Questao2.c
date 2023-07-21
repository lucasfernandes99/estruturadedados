#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa{
    char nome[20];
    int doc;
    int idade;
    
}Pessoa;

void cadastraPessoa(Pessoa * pess){
    
    printf("\nDigite o nome: \n");
    scanf(" %[^\n]",pess->nome);

    printf("Digite o numero do documento: \n");
    scanf("%d",&pess->doc);

    printf("Digite a idade: \n");
    scanf("%d",&pess->idade);

}

void imprime(Pessoa *pess){
    printf("\nDados Informados:\nNome:%s \t Num Documento: %d \t Idade: %d", pess->nome, pess->doc, pess->idade);
}

void alteraPessoa(Pessoa *pess, int quant) {
    int i;
    
    for(i = 0; i < quant; i++) {
        printf("\nInfome a nova idade da pessoa %d: ", i+1);
        scanf("%d", &pess[i].idade);
    }
}

/*void maiorMenorSalario(pessionario *pess, int tam) {
    int i, maior = 0, menor = 0;
    for (i = 0; i < tam; i++) {
        if (pess[i].salario > pess[maior].salario) {
            maior = i;
        }
        if (pess[i].salario < pess[menor].salario) {
            menor = i;
        }
        
    }
    printf("\nCargo com maior salario: %s \t Salario: R$ %.2f\nCargo com menor salario: %s \t Salario: R$ %.2f", pess[maior].cargo, pess[maior].salario, pess[menor].cargo, pess[menor].salario);
}*/

int main(void){

    int quant;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quant);

    Pessoa pess[quant];
    int i;
    for (i = 0; i < quant; i++) {
        cadastraPessoa(&pess[i]);
    }
    for (i = 0; i < quant; i++) {
        imprime(&pess[i]);
    }
    alteraPessoa(&pess[i],quant);
    for (i = 0; i < quant; i++) {
        imprime(&pess[i]);
    }

    //maiorMenorSalario(pess, quant);

    return 0;
}
