#include "agenda.c"

int main(void){
    int op=0;
    
    while (op!=6){
        printf("\tSISTEMA DE AGENDA\n\n");
        printf("--------------MENU--------------\n");
        printf("|1- Adcionar contato           |\n");
        printf("|2- Remover Contato            |\n");
        printf("|3- Listar Contatos Cadastrados|\n");
        printf("|4- Editar o Contato           |\n");
        printf("|5- Buscar Contato             |\n");
        printf("|6- Sair                       |\n");
        printf("--------------------------------\n\n");
        printf("Digite a opcao: ");
        scanf("%d",&op);
        printf("\n");

        switch (op){
        case 1:
            /* code */
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            printf("Obrigado por utlizar o programa!\n");
            break;    
        default:
            printf("Opcao invalida!\n\n");
            break;
        }
    }
    


    return 0;
}