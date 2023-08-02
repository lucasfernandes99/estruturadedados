#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *v[10];
    int i,c,elemento;
    int menor=0,maior=0;
    float media;

    FILE * e = fopen("entrada_q2.txt","r");
    if(e == NULL){
        printf("Erro na abertura do arquivo de entrada!\n");
        return 1;
    }
    FILE * s = fopen("saida_q2.txt","wt");
    if(s == NULL){
        printf("Erro na abertura do arquivo de saida!\n");
        fclose(e);
        return 1;
    }

    while((c = fgetc(e))!=EOF){
        if(c=='\n'){
            for(i=0;i<10;i++){
                fscanf(e,"%d", &v[i]);
                elemento=elemento+*v[i];
                if (v[i] > v[maior]){
                    maior=i;
                }
                if (v[i] < v[menor]){
                    menor=i;
                }
            }
        }
    }

    media=elemento/10;
    fprintf(s,"Menor Elemento: %d\nMaior Elemento: %d\n Media dos Elementos: %f", v[menor],v[maior],media);
    
    fclose(e);
    fclose(s);

    return 0;
}
