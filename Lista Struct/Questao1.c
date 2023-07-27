#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
}Funcionario;

void cadastraFuncionario(Funcionario **func, int quant){
    int i;
    for(i=0;i<quant;i++){
        
        printf("\nDigite o nome:\n");
        scanf(" %[^\n]",func[i]->nome);

        printf("Digite o salario:\n");
        scanf("%f",&func[i]->salario);

        printf("Digite o identificador:\n");
        scanf("%d",&func[i]->identificador);

        printf("Digite o cargo:\n");
        scanf(" %[^\n]",func[i]->cargo);
    }
}

void imprime(Funcionario **func,int quant){
    int i;
    printf("\nDados Informados:\n");
    for(i=0;i<quant;i++){
        printf("\nFuncionario %d\n", i+1);
        printf("Nome:%s \t Salario: R$ %.2f \t Identificador: %d \t Cargo: %s\n", func[i]->nome, func[i]->salario, func[i]->identificador, func[i]->cargo);
    }

}

void alteraSalario(Funcionario ** func,int quant){
    int i;
    printf("\n");
    for(i=0;i<quant;i++){
        printf("Digite o novo salario do funcionario %d: ",i+1);
        scanf("%f",&func[i]->salario);
    }
}

void maiorMenorSalario(Funcionario ** func, int quant){
    int i, maior=0, menor=0;
    for (i=0;i<quant;i++){
        if (func[i]->salario > func[maior]->salario) {
            maior = i;
        }
        if (func[i]->salario < func[menor]->salario) {
            menor = i;
        }
    }
    printf("\nCargo com maior salario: %s \t Salario: R$ %.2f\nCargo com menor salario: %s \t Salario: R$ %.2f", func[maior]->cargo, func[maior]->salario, func[menor]->cargo, func[menor]->salario);
}   

int main(){
    int quant,i;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quant);
    Funcionario **func=(Funcionario**) malloc(quant*sizeof(Funcionario*));

    if(func==NULL) {
        printf("Memoria nao alocada");
        exit(1);
    }

    for(i=0;i<quant;i++){
        func[i]=(Funcionario*) malloc(quant*sizeof(Funcionario));
    }

    cadastraFuncionario(func,quant);
    imprime(func,quant);
    alteraSalario(func,quant);
    maiorMenorSalario(func,quant);
    
    for(i=0;i<quant; i++){
        free(func[i]);
    }  

    free(func);

    return 0;
}