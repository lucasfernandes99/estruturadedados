#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
}Funcionario;

void cadastra_funcionario(Funcionario * func){
    
    printf("\nDigite o nome: \n");
    scanf(" %[^\n]",func->nome);

    printf("Digite o salario: \n");
    scanf("%f",&func->salario);

    printf("Digite o identificador: \n");
    scanf("%d",&func->identificador);

    printf("Digite o cargo: \n");
    scanf(" %[^\n]",func->cargo);

}

void imprime(Funcionario *func){
    printf("\nDados Informados:\nNome:%s \t Salario: R$ %.2f \t Identificador: %d \t Cargo: %s", func->nome, func->salario, func->identificador, func->cargo);
}

void alteraSalario(Funcionario *func, int quant) {
    int i;
    
    for(i = 0; i < quant; i++) {
        printf("\nInfome o novo salario do funcionario %d: ", i+1);
        scanf("%f", &func[i].salario);
        printf("%f",func[i].salario);
    }
}


void maiorMenorSalario(Funcionario *func, int tam) {
    int i, maior = 0, menor = 0;
    for (i = 0; i < tam; i++) {
        if (func[i].salario > func[maior].salario) {
            maior = i;
        }
        if (func[i].salario < func[menor].salario) {
            menor = i;
        }
        
    }
    printf("\nCargo com maior salario: %s \t Salario: R$ %.2f\nCargo com menor salario: %s \t Salario: R$ %.2f", func[maior].cargo, func[maior].salario, func[menor].cargo, func[menor].salario);
}

int main(void){

    int quant;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quant);

    Funcionario func[quant];
    int i;
    for (i = 0; i < quant; i++) {
        cadastra_funcionario(&func[i]);
    }
    for (i = 0; i < quant; i++) {
        imprime(&func[i]);
    }
    alteraSalario(&func[i], quant);

    maiorMenorSalario(func, quant);

    return 0;
}
