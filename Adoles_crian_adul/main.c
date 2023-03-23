#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Oi meu consagrado! qual seu nome?\n");
    scanf("%s", &nome);

    printf("\nQual a sua idade?\n");
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde um momento....\n");

    printf("A primeira letra do seu nome e:%c", nome[0]);

    if(idade >= 18){
        printf("\nVoce e adulto");
    }else if(idade >=13){
        printf("\nVoce e adolescente");
    }else{
       printf("\n voce e crianca");
    }


}
