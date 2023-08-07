#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct funcionario{
    char nome[50];
    char departamento;
    float salario;
    float valorTotal;
    char funcional[10];
}Funcionario;

void copia_dados(FILE* fl, int n, Funcionario** pessoal){
    int i=0;
    
    while(!feof(fl)){
        if(i==0){
            fscanf(fl,"%d",&n);
        }
        else{
            fscanf(fl,"%[^\t]\t%[^\t]\t%c\t%f ",pessoal[i-1]->funcional, pessoal[i-1]->nome, &pessoal[i-1]->departamento, &pessoal[i-1]->salario);
        }
        i++;
    }    
}

void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto){
    int i=0; 
    
    printf("\nFOLHA DE PAGAMENTO DEPTO %c\n", depto); 
    printf("FUNCIONAL\tNOME\t\tDEPTO\t\tSALARIO\n"); 

    while(i<n){
        if(strcmp(&(pessoal[i]->departamento),&(depto))==0){ 
            printf("%s\t\t%s\t\t%c\t\t%.2f\n", pessoal[i]->funcional, pessoal[i]->nome, pessoal[i]->departamento, pessoal[i]->salario);
            pessoal[depto]->valorTotal+=pessoal[i]->salario;
        }
        
        i++;
    }
    
    printf("VALOR TOTAL: R$ %.2f\n",pessoal[depto]->valorTotal);
}
 
int main(void) {

    char linha[100];
    int num_func,i;

    FILE * entrada=fopen("entrada_q1.txt","r");
    if (entrada==NULL){ 
        printf("Arquivo de entrada nao encontrado!\n"); 
        return 1; 
    }

    Funcionario** pessoal=(Funcionario**) malloc(num_func*sizeof(Funcionario*));
    for(i=0; i<num_func; i++){
        pessoal[i]=(Funcionario*) malloc(sizeof(Funcionario));
    }

    fgets(linha,100,entrada); 
    sscanf(linha,"%d",&num_func);
    printf("Numero de funcionarios: %d\n",num_func);

    copia_dados(entrada,num_func,pessoal); 
   
    imprime_folha_pagamento(num_func,pessoal,'A');
    imprime_folha_pagamento(num_func,pessoal,'B'); 
    imprime_folha_pagamento(num_func,pessoal,'C');

    fclose(entrada);
    for(i=0;i<num_func;i++){ 
        free(pessoal[i]);
    }
    free(pessoal); 

    return 0;
}