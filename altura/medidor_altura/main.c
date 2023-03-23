#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    float altura;

    printf("Oi meu consagrado! qual seu nome?\n");
    scanf("%s", &nome);

    printf("\nQual a sua altura?\n");
    scanf("%f",&altura);

    printf("Nome: %s\naltura: %d\n",nome,altura);

    printf("\nAguarde um momento....\n");

    printf("A primeira letra do seu nome e:%c", nome[0]);

    if(altura <= 1,80){
        printf("\nVoce pode andar no brinquedo");
    }else if (altura >=1,80){
        printf("\nVoce nao pode andar no brinquedo");
    }

}
